#ifndef __POINT_H__
#define __POINT_H__

template <typename T>
class Point{
    private:
        T x,y;
    public:
        Point (const T u, const T v): x(u), y(v){}
        T getx() const;
        T gety() const;
};

template <typename T>
T Point<T>::getx() const{
    return x;
}

template <typename T>
T Point<T>::gety() const{
    return y;
}

#endif