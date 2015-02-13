#include "include/shell.h"
#include "iostream"
#include <stack>

Shell::Shell():Sorts(){}

Shell::Shell( t_type* arr, unsigned int size ):
    Sorts( arr, size ){}

Shell::~Shell(){}

void Shell::sort()
{
    unsigned int h;
    t_type temp_array_element;
    std::stack<unsigned int> stackForH;
    for ( unsigned int p = 1; p < m_size; p = 3 * p + 1 )
    {
        stackForH.push( p );
    }

    while ( !stackForH.empty() )
    {
        h = stackForH.top();
        stackForH.pop();
//        std::cout << "\nh = " << h << " : ";
        for ( unsigned int i = 0; i < h; ++i )
        {
            for ( unsigned int j = i; j < m_size; j = j + h )
            {
                for ( int k = j; k > h - 1; k -= h)
                {
                    if ( m_arr[ k ] < m_arr[ k - h ] )
                    {
                        temp_array_element = m_arr[ k ];
                        m_arr[ k ] = m_arr[ k - h ];
                        m_arr[ k - h ] = temp_array_element;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

//        std::cout << '\n';
//        for( unsigned int u = 0; u < m_size; u++ )
//        {
//            std::cout << m_arr[ u ] << " ";
//        }
    }

    std::cout << "SHELL\n";
}
