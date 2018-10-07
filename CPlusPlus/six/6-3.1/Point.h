// Point.h
#ifndef_POINT_H
#define_POINT_H
class Point { // 类
    public:     // 外部接口
        Point();
        Point(int x, int y);
        ~Point();
        void move(int newX, int newY);
        int getX() const { return x; }
        int getY() const { return y; }
        static void showCount();    // 静态数据成员
    private:    // 私有数据成员
        int x,y;
};
#endif//_POINT_H
