//
//  Shape.h
//  Assignment5
//
//  Created by Katelyn on 4/22/16.
//  Copyright © 2016 Katelyn. All rights reserved.
//

#ifndef Shape_h
#define Shape_h

class Shape{
    /**
     * A function to determine whether a shape contains a given point.
     *
     * Arguments:
     * - 'p': The point we are considering.
     *
     * Returns:
     * -'true' if the given point is inside the shape, 'false' otherwise
     *
     */

public:
    virtual bool contains( const Point & p ) const = 0;
    
    virtual ~Shape() = default;
};

#endif /* Shape_h */
