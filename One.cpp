#include <iostream>
using namespace std;

struct personal {
    char name[20];
    int id;
    float reading[5];
    float total;
};

int main()
{
    struct personal area;
    area.total=0;
    cout << "Enter name:";
    cin >> area.name;
    cout << "Enter ID:";
    cin >> area.id;
    for (int i = 0; i < 5; i++) 
    {
        cout <<"Enter the polution reading no " << i + 1 << ": ";
        cout << "";
        cin >> area.reading[i];
        area.total += area.reading[i];
    }
cout << "\nThe name of the area is :" << area.name << endl;
cout<<"The ID of the area is :"<< area.id << endl;
for(int i=0;i<5;i++)
{
    cout<<"The polution reading no "<<i+1<<": "<<area.reading[i]<<endl;
}
cout << "The Total Polution reading is :" << area.total << endl;

return 0;
}
