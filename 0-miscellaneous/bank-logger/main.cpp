#include <cstdio>

struct Logger
{
    virtual ~Logger() = default;
    // placing =0 at the end of a virtual method marks it as PURE virtual, meaning
    // that derived class MUST implement its own version of the method.
    virtual void log_transfer(long from, long to, double amount) = 0;
};

struct ConsoleLogger : Logger
{
    void log_transfer(long from, long to, double amount) override
    {
        printf("%ld -> %ld: %f\n", from, to, amount);
    }
};

struct Bank
{
    void make_transfer(long from, long to, double amount)
    {
        logger.log_transfer(from, to, amount);
    };
    ConsoleLogger logger;
};

int main()
{
    Bank bank;
    bank.make_transfer(1000, 2000, 49.95);
    bank.make_transfer(2000, 4000, 20.00);
};