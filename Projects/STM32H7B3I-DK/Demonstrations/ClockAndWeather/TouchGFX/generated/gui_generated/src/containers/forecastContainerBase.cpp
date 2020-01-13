/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/forecastContainerBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

forecastContainerBase::forecastContainerBase()
{
    setWidth(75);
    setHeight(41);

    weatherIcon.setXY(0, 0);
    weatherIcon.setBitmap(touchgfx::Bitmap(BITMAP_BROKEN_CLOUDS_ICON_24_ID));

    weekday.setPosition(37, -3, 25, 20);
    weekday.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    weekday.setLinespacing(0);
    weekday.setTypedText(touchgfx::TypedText(T_FORECASTMONDAY));

    temp.setPosition(39, 6, 36, 35);
    temp.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    temp.setLinespacing(0);
    Unicode::snprintf(tempBuffer, TEMP_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID9).getText());
    temp.setWildcard(tempBuffer);
    temp.setTypedText(touchgfx::TypedText(T_SINGLEUSEID8));

    add(weatherIcon);
    add(weekday);
    add(temp);
}

void forecastContainerBase::initialize()
{
	
}