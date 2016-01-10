#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void roatation(int a[ending_row][ending_column],int r)
{



            int starting_row=0,starting_column=0,i=0;
            while(starting_row<ending_row && starting_column<ending_column)
                {   temp=a[starting_row][starting_column];

                    for(i=0;i<ending_column-1;i++)
                        {
                            a[starting_row][i]=a[starting_row][i+1]
                        }
                    starting_row++;
                    for(i=0;i<ending_row-1;i++)
                        {
                            a[i][i]=a[starting_row][i+1]
                        }

                }



}


int main() {
    cin>>n>>m>>r;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
