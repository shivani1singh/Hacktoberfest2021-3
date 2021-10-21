#include<bits/stdc++.h>

using namespace std;
class Box 
{
    private:
    
    int length, breadth, height;
    public:
    // Constructors: 
    // Box();
    Box() 
    {
        length = 0;
        breadth = 0;
        height = 0;
    }
    // Box(int,int,int);
    Box(int l, int b, int h) 
    {
        length = l;
        breadth = b;
        height = h;
    }
    // Box(Box);
    Box(const Box &B) 
    {
        length = B.length;
        breadth = B.breadth;
        height = B.height;
    }
    // int getLength(); // Return box's length
    int getLength() 
    {
        return length;
    }
    // int getBreadth (); // Return box's breadth
    int getBreadth() 
    {
        return breadth;
    }
    // int getHeight ();  //Return box's height
    int getHeight() 
    {
        return height;
    }
    // long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume() 
    {
        return (long long)(breadth) * length * height;
    }
    
    //bool operator<(Box& b)
    bool operator<(Box &B) 
    {
        if (length < B.length) 
        {
            return true;
        } 
        else if (length == B.length) 
        {
            if (breadth < B.breadth) 
            {
                return true;
            } 
            else if (breadth == B.breadth) 
            {
                if (height < B.height) 
                {
                return true;
                }
            }
        }

        return false;
    }
};

ostream &operator<<(ostream &out, Box &B) 
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}

