#include <stdexcept>

constexpr void assert_that(bool statement, const char *message)
{
    if (!statement)
        throw std::runtime_error{message};
}

struct SpeedUpdate
{
    double velocity_mps;
};

struct CarDetected
{
    double distance_m;
    double velocity_mps;
};

struct BrakeCommand
{
    double time_to_collision_s;
};

template <typename T>
struct AutoBrake
{
    AutoBrake(const T &publish) : speed_mps{}, publish{publish} {}
    void observe(const SpeedUpdate &cd) {}
    void observe(const CarDetected &cd) {}
    void set_collision_threshold_s(double x)
    {
        collision_threshold_s = x;
    }
    double get_collision_threshold_s() const
    {
        return collision_threshold_s;
    }

    double get_speed_mps() const
    {
        return speed_mps;
    }

private:
    double collision_threshold_s;
    double speed_mps;
    const T &publish;
};

void run_test(void (*unit_test)(), const char *name)
{
    try
    {
        unit_test();
        printf("[+] Test %s successful.\n", name);
    }
    catch (const std::exception &e)
    {
        printf("[-] Test failure in %s. %s.\n", name, e.what());
    }
}

void initial_speed_is_zero()
{
    AutoBrake auto_brake{
        [](const BrakeCommand &) {}};
    assert_that(auto_brake.get_speed_mps() == 0L, "speed not equal to 0");
}

int main()
{
    run_test(initial_speed_is_zero, "initial speed is 0");
}