#include "include/quick.h"
#include <iostream>
#include <stack>
#include <string.h>
#include <stdlib.h>
#include <time.h>


Quick::Quick():Sorts(){}

Quick::Quick( t_type* arr, unsigned int size ):
    Sorts( arr, size ){}

Quick::~Quick(){}

void Quick::print()
{
    std::cout << "\nOLOLO : ";
    for ( unsigned i = 0;i < m_size; ++i )
    {
        std::cout << m_arr[ i ] << " ";
    }
}

void Quick::swap(unsigned i, unsigned j)
{
    t_type tmp =  m_arr[ i ];
    m_arr[ i ] = m_arr [ j ];
    m_arr[ j ] = tmp;
}

void Quick::shuffle()
{
    srand( time( NULL ) );
    int swap_with;
    for ( unsigned i = 0; i < m_size; ++i )
    {
        swap_with = rand() % ( i + 1 );
        swap(i, swap_with);
    }
//    std::cout << "\ninside shuffle";
//    print();
}

unsigned Quick::quick( unsigned lo, unsigned hi )
{
//    std::cout << "\narray, lo = " << lo << ", hi = " << hi << "\n";
//    print();
//    std::cout << "array\n";

    t_type elem = m_arr[ lo ];
    unsigned i = lo + 1;
    unsigned j = hi;

    while ( ( j > lo ) && ( i <= hi ) && ( i <= j ) )
    {
        if ( m_arr[ i ] <= elem )
        {
            ++i;
            continue;
        }

        if ( m_arr[ j ] >= elem )
        {
            --j;
            continue;
        }

        if ( m_arr[ i ] > m_arr[ j ] )
        {
            swap( i, j );
        }
        ++i;
        --j;
    }

    swap( lo, i - 1 );

//    std::cout << "After\n";
//    for ( int i = 0; i < m_size; ++i )
//    {
//        std::cout << m_arr[ i ] << " ";
//    }

    return i - 1;
}

void Quick::sort()
{
//    print();
    shuffle();
//    std::cout << "\nafter shuffle";
//    print();

    std::stack< std::pair<unsigned, unsigned> > st;
    st.push(std::make_pair(0, m_size -1));
    std::pair < unsigned, unsigned > ends;
    unsigned mid;
    while(!st.empty())
    {
        ends = st.top();
        st.pop();
        mid = quick(ends.first, ends.second);
        //condition!!!
        if (mid - ends.first > 1)
        {
            st.push(std::make_pair(ends.first, mid - 1));
        }
        if (ends.second - mid > 1)
        {
            st.push(std::make_pair(mid + 1, ends.second));
        }
    }

//    print();

}
