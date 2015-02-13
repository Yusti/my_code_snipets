#include "include/insert.h"
#include "include/select.h"
#include "include/shell.h"
#include "include/merge.h"
#include "include/quick.h"
#include "include/simple_data.h"
#include <iostream>
#include <time.h>
#include <cstdio>
#include <ctime>

int main()
{
//    int arr[] = { 8, 7, 5, 6, 21, 1, 45, 3 };
//    Sorts* sr = new SimpleData( arr, 8 , 60 );
//    sr->sort();
//    for ( int i = 0; i < 8; ++i )
//    {
//        std::cout << sr->m_arr[ i ] << std::endl;
//    }
//______________________________________
    const int max_ind = 100000;
    int max_count = 1;
    t_type a[ max_ind ];
    for ( int i = 0; i < max_ind; ++i )
    {
        a[ i ] = i % 100;
    }

    std::clock_t start;
    double duration;
    start = std::clock();

    std::cout << "SELECT SORT:";
    for ( int i = 0; i < max_count; ++i )
    {
        Sorts* sr = new SimpleData( a, max_ind, 100 );
        sr->sort();
        for ( int j = 0; j < max_ind; ++j )
        {
            std::cout << sr->m_arr [ j ];
        }
        std::cout << "\n";
        delete sr;
        sr = 0;
    }

    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout<<"printf: "<< duration <<'\n';

    return 0;
}
