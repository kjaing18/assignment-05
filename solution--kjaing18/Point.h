//
//  Point.h
//  Assignment5
//
//  Created by Katelyn on 4/22/16.
//  Copyright © 2016 Katelyn. All rights reserved.
//

#ifndef Point_h
#define Point_h

class Point
{
private:
    double x;
    double y;
public:
    //constructor
    Point( double x = 0, double y = 0 ) : x(x), y(y)
    {
        //setting default point (0,0)
    }
    
    //deconstructor
    ~Point() = default;
    
    //getters
    double getX()
    {
        return x;
    }
    
    double getY()
    {
        return y;
    }
};



#endif /* Point_h */
