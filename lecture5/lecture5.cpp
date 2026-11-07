#include <iostream>
#include <string>
// Just some review
// SFML vec2 class implementation
// We will be implementing our own Vector class on second project
class Vec2
{
public:
    // Only use Hungarian Notation (m_) on private variables
    float x = 0;
    float y = 0;

    Vec2() = default;

    Vec2(float xin, float yin)
        : x(xin)
        , y(yin)
    {        
    }

    Vec2 operator + (const Vec2& rhs) const
    {
        return Vec2(x + rhs.x, y + rhs.y);  
    }

    void add(const Vec2& v)
    {
        x += v.x;
        y += v.y;
    }
};



int main(int argc, char * argv[])
{
    Vec2 v1(100, 200);
    Vec2 v2(50, 75);
    
    Vec2 v3 = v1 + v2;

    std::cout << v3.x << " " << v3.y << "\n";
    return 0;
}