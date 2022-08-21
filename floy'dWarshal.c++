#include     <iostream>
using namespace std;
int N,E;
int graph[ 100 ][ 100 ];
int start,end;
int main( )
{
    cin>>N>>E;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            graph[ i ][ j ] = 9999;                             
            if( i == j )
                graph[ i ][ j ] == 0;                           
                                                                
        }
    }
    for(int i = 0; i < E; i++)
    {
        int x,  y, d;
        cin>>x>>y>>d;
        graph[ x - 1 ][ y - 1 ] = graph[ y - 1 ][ x - 1 ] = d;
    }
    for(int k = 0; k < N; k++)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                graph[ i ][ j ] = min( graph[ i ][ j ], graph[ i ][ k ] + graph[ k ][ j ] );
            }
        }
    }
    while( true )
    {                                                           
        cin>>start<<endl;
        cout<<graph[ start - 1 ][ end - 1 ]<<endl;
    }
    return 0;
}
