#include "include/simple_data.h"
#include <iostream>
#include <stack>
#include <string.h>
#include <stdlib.h>
#include <time.h>


SimpleData::SimpleData():Sorts(), m_max_value( 0 ){}

SimpleData::SimpleData( t_type* arr, unsigned int size, unsigned int max_value ):
    Sorts( arr, size ), m_max_value( max_value ){}

SimpleData::~SimpleData(){}

void SimpleData::print()
{
    std::cout << "\nOLOLO : ";
    for ( unsigned i = 0;i < m_size; ++i )
    {
        std::cout << m_arr[ i ] << " ";
    }
}


void SimpleData::sort()
{
//    print();
    unsigned int* elements_count = new unsigned int[ m_max_value ];
    memset( elements_count, 0, sizeof( t_type ) * m_max_value );
    for ( unsigned int i = 0; i < m_size; ++i )
    {
        ++ elements_count[ m_arr[ i ] ];
    }
    unsigned int p = 0;
    for ( unsigned int i = 0; i < m_size; )
    {
        if ( elements_count[ p ] != 0 )
        {
            m_arr[ i ] = p;
            --elements_count[ p ];
            ++i;
        }
        else
        {
            ++p;
        }
    }
//    print();
}

