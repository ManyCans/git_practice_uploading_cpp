

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
using namespace std;
vector<string> get_lines( const string& fname )
{
    vector<string> lines ;

    ifstream file(fname) ;
    string a_line ;
    while( getline( file, a_line ) ) lines.push_back(a_line) ;

    return lines ;
}

vector<string> split( string str, const string& delimiters )
{
   vector<string> tokens ;

   size_t from = 0 ;
   size_t pos = str.find_first_of( delimiters, 0 ) ;
   while( pos != string::npos )
   {
       if( pos != from ) tokens.push_back( str.substr( from, pos-from ) ) ;
       from = pos+1 ;
       pos = str.find_first_of( delimiters, from ) ;
   }
   if( from < str.size() ) tokens.push_back( str.substr(from) ) ;

   return tokens ;
}

int main()
{
    const auto lines = get_lines( __FILE__ ) ;

    map< string, int > map ;
    for( string str : lines )
    {
        static const string delimiters = " \t\n.'\"(){};=!+-,&<>[]#:\\/" ;
        for( auto token : split( str, delimiters ) )
        ++map[token] ;
    }

    // print out the contents of the map to verify that things are ok
    for( const auto& pair : map ) cout << pair.first << " : " << pair.second << '\n' ;
}

