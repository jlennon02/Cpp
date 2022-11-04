#ifndef __INTARRAY_H__
#define __INTARRAY_H__
#include "Point.h"
/**
 * Arreglo de enteros estático representado en una clase
*/
class IntArray {
        int size;
        Point *data;        
    public:
        IntArray(int size);
        IntArray(const IntArray &o);

        void setAt(int index, Point value);
        Point getAt(int index) const ;
        int getSize() const ;
        void print() const ;

        ~IntArray();
};

#endif