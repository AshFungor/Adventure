#include <godot_cpp/classes/sprite2d.hpp>

#pragma once

namespace godot {

class Example : public Sprite2D {
    GDCLASS(Example, Sprite2D)

private:
    double time_passed;

protected:
    static void _bind_methods();

public:
    Example();
    ~Example();

    void _process(double delta) override;
};

}
