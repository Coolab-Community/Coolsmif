/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/CustomContainer1Base.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>

CustomContainer1Base::CustomContainer1Base()
{
    setWidth(168);
    setHeight(67);
    icon.setXY(6, 6);
    icon.setBitmap(touchgfx::Bitmap(BITMAP_MINIDOWN_ID));

    shape1.setPosition(126, 23, 25, 25);
    shape1.setVisible(false);
    shape1.setOrigin(0.000f, 0.000f);
    shape1.setScale(0.300f, 0.300f);
    shape1.setAngle(0.000f);
    shape1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
    shape1.setPainter(shape1Painter);
    const touchgfx::AbstractShape::ShapePoint<float> shape1Points[4] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f }, { 0.000f, 40.000f } };
    shape1.setShape(shape1Points);

    add(icon);
    add(shape1);
}

void CustomContainer1Base::initialize()
{

}
