//
//  Ellipse.h
//  Assignment5
//
//  Created by Katelyn on 4/22/16.
//  Copyright © 2016 Katelyn. All rights reserved.
//

#ifndef Ellipse_h
#define Ellipse_h

#include "Point.h"
class Ellipse : public Shape
{
public:
    bool contains( const Point & p ) const
    {
        return true;
    }
};

#endif /* Ellipse_h */
