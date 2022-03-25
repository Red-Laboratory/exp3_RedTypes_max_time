#include <iostream>
#include <chrono>

#include "RedTypes.h"

int main() {
    //
    // 512.
    //
    {
        Red::uint512_t *u = new Red::uint512_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 512;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "512: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 1024.
    //

    {
        Red::uint1024_t *u = new Red::uint1024_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 1024;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "1024: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 2048.
    //

    {
        Red::uint2048_t *u = new Red::uint2048_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 2048;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "2048: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 4096.
    //

    {
        Red::uint4096_t *u = new Red::uint4096_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 4096;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "4096: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 8192.
    //

    {
        Red::uint8192_t *u = new Red::uint8192_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 8192;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "8192: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 16384.
    //

    {
        Red::uint16384_t *u = new Red::uint16384_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 16384;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "16384: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 32768.
    //

    {
        Red::uint32768_t *u = new Red::uint32768_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 32768;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "32768: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 65536.
    //

    {
        Red::uint65536_t *u = new Red::uint65536_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 65536;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "65536: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 131072.
    //

    {
        Red::uint131072_t *u = new Red::uint131072_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 131072;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "131072: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 262144.
    //

    {
        Red::uint262144_t *u = new Red::uint262144_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 262144;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "262144: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 524288.
    //

    {
        Red::uint524288_t *u = new Red::uint524288_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 524288;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "524288: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 1048576.
    //

    {
        Red::uint1048576_t *u = new Red::uint1048576_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 1048576;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "1048576: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 2097152.
    //

    {
        Red::uint2097152_t *u = new Red::uint2097152_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 2097152;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "2097152: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 4194304.
    //

    {
        Red::uint4194304_t *u = new Red::uint4194304_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 4194304;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "4194304: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 8388608.
    //

    {
        Red::uint8388608_t *u = new Red::uint8388608_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 8388608;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(*u, t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "8388608: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 16777216.
    //

    {
        auto start = std::chrono::system_clock::now();
        unsigned int t = 16777216;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(2), t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "16777216: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
    }

    //
    // 33554432.
    //

    {
        Red::uint33554432_t *u = new Red::uint33554432_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 33554432;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(2), t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "33554432: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 67108864.
    //

    {
        Red::uint67108864_t *u = new Red::uint67108864_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 67108864;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(2), t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "67108864: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 134217728.
    //

    {
        Red::uint134217728_t *u = new Red::uint134217728_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 134217728;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(2), t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "134217728: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 268435456.
    //

    {
        Red::uint268435456_t *u = new Red::uint268435456_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 268435456;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(2), t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "268435456: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 536870912.
    //

    {
        Red::uint536870912_t *u = new Red::uint536870912_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 536870912;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(2), t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "536870912: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 1073741824.
    //

    {
        Red::uint1073741824_t *u = new Red::uint1073741824_t(2);

        auto start = std::chrono::system_clock::now();
        unsigned int t = 1073741824;
        boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(2), t));
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << "1073741824: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
        delete u;
    }

    //
    // 2147483648.
    //

    {
        auto start = std::chrono::system_clock::now();
        Red::uint512_t t = 4;
        //boost::multiprecision::cpp_int *ab = new boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(2), t));
        boost::multiprecision::cpp_int *ab = Red::power_2<Red::uint512_t>(t);
        auto duration = std::chrono::system_clock::now() - start;

        std::cout << *ab << " : " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0 << std::endl;

        delete ab;
    }
}
