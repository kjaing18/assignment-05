//
//  Rectangle.h
//  Assignment5
//
//  Created by Katelyn on 4/22/16.
//  Copyright © 2016 Katelyn. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h

#include "Point.h"

class Rectangle : public Shape
{
public:
    bool contains( const Point & p ) const
    {
        return true;
    }
};

#endif /* Rectangle_h */
