// Random walk: A (drunken) cockroach is placed on a given square in the 
// middle of a tile floor in a rectangular room of size n x m tiles. 
// The bug wanders (possibly in search of an aspirin) randomly from tile to tile 
// throughout the room. Assuming that it may move from his present tile to any
// of the eight tiles surrounding it (unless it is against a wall) with equal 
// probability, how long will it take him to touch every tile on the floor at least
// once? 
// Write a C++ program to graphically show a random walk of a (drunken) 
// cockroach and find the no of moves made.

#include<iostream>
using namespace std;

class cockroach
{
    
    int n, m, flag, totalTiles, tileCount = 0, arrCount = 1;
    int arr[100];

    public:
        void floorDimensions()
        {
            cout<<"enter the dimesions of the floor"<<endl;
            cout<<"no of tiles in one row: "; cin>>n;
            cout<<"no of tiles in one column: "; cin>>m;

            totalTiles = (n * m)+1;
        }
        void tilesCount()
        {
            while (arrCount != totalTiles)
            {
                int randomTile = rand() % totalTiles;
                tileCount++;

                flag = 0;
                for (int i = 0; i < arrCount; i++)
                {
                    if (arr[i] == randomTile || randomTile == 0)
                    {
                        flag = 1;
                    }
                }
                if (flag == 0)
                {
                    arr[arrCount-1] = randomTile;
                    // cout<<arr[arrCount-1]<<" ";
                    arrCount++;
                }
            }

            cout<<"total steps cockroach takes of cover each and every tile: "<<tileCount;
        }
};

int main()
{
    cockroach obj;
    obj.floorDimensions();
    obj.tilesCount();

    return 0;
}
