#include <vector>
int main(int argc, const char * argv[])
{
    auto description = [](std::vector<int> v){
        for( auto value : v ){
            printf( "%d\n", value );
        }
    };
    {
        printf( "head\n" );
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        
        auto it = lower_bound( v.begin(), v.end(), 2 );
        v.erase( v.begin(), it );
   
        description( v );
    }
    {
        printf( "tail\n" );
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        
        auto it = lower_bound( v.begin(), v.end(), 2 );
        v.erase( it, v.end() );
   
        description( v );
    }
    return 0;
}
