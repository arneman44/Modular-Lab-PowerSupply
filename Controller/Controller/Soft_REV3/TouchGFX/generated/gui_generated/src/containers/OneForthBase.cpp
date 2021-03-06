/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/OneForthBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

OneForthBase::OneForthBase()
{
    setWidth(432);
    setHeight(270);
    Background.setPosition(0, 0, 432, 270);
    Background.setColor(touchgfx::Color::getColorFrom24BitRGB(75, 76, 85));

    VoltageReadBack.setPosition(10, 10, 280, 81);
    VoltageReadBack.setColor(touchgfx::Color::getColorFrom24BitRGB(56, 56, 56));

    VoltageSetBack.setPosition(300, 10, 122, 37);
    VoltageSetBack.setColor(touchgfx::Color::getColorFrom24BitRGB(56, 56, 56));

    VoltageRead.setPosition(10, 10, 280, 81);
    VoltageRead.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    VoltageRead.setLinespacing(0);
    VoltageRead.setTypedText(touchgfx::TypedText(T_SINGLEUSEID6));

    VoltageSet.setPosition(300, 10, 122, 37);
    VoltageSet.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    VoltageSet.setLinespacing(0);
    VoltageSet.setTypedText(touchgfx::TypedText(T_SINGLEUSEID7));

    VoltageSetClick.setBoxWithBorderPosition(0, 0, 122, 37);
    VoltageSetClick.setBorderSize(5);
    VoltageSetClick.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    VoltageSetClick.setPosition(300, 10, 122, 37);
    VoltageSetClick.setAlpha(0);

    Settings.setBoxWithBorderPosition(0, 0, 56, 37);
    Settings.setBorderSize(0);
    Settings.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(56, 56, 56), touchgfx::Color::getColorFrom24BitRGB(56, 56, 56), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    Settings.setIconBitmaps(Bitmap(BITMAP_COG_OUTLINE_SMALL_WHITE_ID), Bitmap(BITMAP_COG_OUTLINE_SMALL_BLACK_ID));
    Settings.setIconXY(16, 6);
    Settings.setPosition(300, 55, 56, 37);

    Settings_1.setBoxWithBorderPosition(0, 0, 56, 37);
    Settings_1.setBorderSize(0);
    Settings_1.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(56, 56, 56), touchgfx::Color::getColorFrom24BitRGB(56, 56, 56), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    Settings_1.setIconBitmaps(Bitmap(BITMAP_POWER_SMALL_WHITE_ID), Bitmap(BITMAP_POWER_SMALL_BLACK_ID));
    Settings_1.setIconXY(16, 6);
    Settings_1.setPosition(366, 55, 56, 37);

    PowerReadPrimBack.setPosition(10, 100, 280, 81);
    PowerReadPrimBack.setColor(touchgfx::Color::getColorFrom24BitRGB(56, 56, 56));

    AmprageSetBack.setPosition(300, 100, 122, 37);
    AmprageSetBack.setColor(touchgfx::Color::getColorFrom24BitRGB(56, 56, 56));

    PowerReadSecBack.setPosition(300, 144, 122, 37);
    PowerReadSecBack.setColor(touchgfx::Color::getColorFrom24BitRGB(56, 56, 56));

    PowerReadPrim.setPosition(10, 100, 280, 81);
    PowerReadPrim.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    PowerReadPrim.setLinespacing(0);
    PowerReadPrim.setTypedText(touchgfx::TypedText(T_SINGLEUSEID8));

    AmprageSet.setPosition(300, 100, 122, 37);
    AmprageSet.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    AmprageSet.setLinespacing(0);
    AmprageSet.setTypedText(touchgfx::TypedText(T_SINGLEUSEID9));

    PowerReadSec.setPosition(300, 144, 122, 37);
    PowerReadSec.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    PowerReadSec.setLinespacing(0);
    PowerReadSec.setTypedText(touchgfx::TypedText(T_SINGLEUSEID10));

    PowerReadSecClick.setBoxWithBorderPosition(0, 0, 122, 37);
    PowerReadSecClick.setBorderSize(5);
    PowerReadSecClick.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    PowerReadSecClick.setPosition(300, 143, 122, 37);
    PowerReadSecClick.setAlpha(0);

    AmprageSetClick.setBoxWithBorderPosition(0, 0, 122, 37);
    AmprageSetClick.setBorderSize(5);
    AmprageSetClick.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    AmprageSetClick.setPosition(300, 100, 122, 37);
    AmprageSetClick.setAlpha(0);

    dynamicGraph1.setScale(1);
    dynamicGraph1.setPosition(10, 190, 412, 70);
    dynamicGraph1.setGraphAreaMargin(0, 0, 0, 0);
    dynamicGraph1.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph1.setGraphRangeY(0, 100);

    dynamicGraph1Line1.setScale(1);
    dynamicGraph1Line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    dynamicGraph1Line1.setPainter(dynamicGraph1Line1Painter);
    dynamicGraph1Line1.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1Line1);

    dynamicGraph1.addDataPoint(96.0070543976293f);
    dynamicGraph1.addDataPoint(98.9174401670901f);
    dynamicGraph1.addDataPoint(94.7645451677004f);
    dynamicGraph1.addDataPoint(84.1782222558823f);
    dynamicGraph1.addDataPoint(69.182994746513f);
    dynamicGraph1.addDataPoint(52.7250020912929f);
    dynamicGraph1.addDataPoint(37.9795945915858f);
    dynamicGraph1.addDataPoint(27.6079474640604f);
    dynamicGraph1.addDataPoint(23.1433484569999f);
    dynamicGraph1.addDataPoint(24.6559024347377f);
    dynamicGraph1.addDataPoint(30.7761507640189f);
    dynamicGraph1.addDataPoint(39.0701950974445f);
    dynamicGraph1.addDataPoint(46.6728928416899f);
    dynamicGraph1.addDataPoint(51.0226133929839f);
    dynamicGraph1.addDataPoint(50.5163292394694f);
    dynamicGraph1.addDataPoint(44.9235442505752f);
    dynamicGraph1.addDataPoint(35.4568580033794f);
    dynamicGraph1.addDataPoint(24.4813267479779f);
    dynamicGraph1.addDataPoint(14.933530102786f);
    dynamicGraph1.addDataPoint(9.5926516819633f);
    dynamicGraph1.addDataPoint(10.3824348334662f);
    dynamicGraph1.addDataPoint(17.8756204713066f);
    dynamicGraph1.addDataPoint(31.1231790778966f);
    dynamicGraph1.addDataPoint(47.8513598310094f);
    dynamicGraph1.addDataPoint(64.9797258567076f);
    dynamicGraph1.addDataPoint(79.3348792794052f);
    dynamicGraph1.addDataPoint(88.386746292738f);
    dynamicGraph1.addDataPoint(90.8287770379527f);
    dynamicGraph1.addDataPoint(86.8615673713344f);
    dynamicGraph1.addDataPoint(78.1119139864848f);
    dynamicGraph1.addDataPoint(67.2083853652208f);
    dynamicGraph1.addDataPoint(57.1183673727349f);
    dynamicGraph1.addDataPoint(50.4096705590709f);
    dynamicGraph1.addDataPoint(48.6179564689207f);
    dynamicGraph1.addDataPoint(51.8750145622263f);
    dynamicGraph1.addDataPoint(58.888730008183f);
    dynamicGraph1.addDataPoint(67.2791598429393f);
    dynamicGraph1.addDataPoint(74.1876462614067f);
    dynamicGraph1.addDataPoint(77.008785763266f);
    dynamicGraph1.addDataPoint(74.064758647246f);
    dynamicGraph1.addDataPoint(65.055470875208f);
    dynamicGraph1.addDataPoint(51.1727277422503f);
    dynamicGraph1.addDataPoint(34.8488613672377f);
    dynamicGraph1.addDataPoint(19.1997500789273f);
    dynamicGraph1.addDataPoint(7.29705505460446f);
    dynamicGraph1.addDataPoint(1.44646121119877f);
    dynamicGraph1.addDataPoint(2.64742454691226f);
    dynamicGraph1.addDataPoint(10.3657314768102f);
    dynamicGraph1.addDataPoint(22.6738684837447f);
    dynamicGraph1.addDataPoint(36.7244513397395f);
    dynamicGraph1.addDataPoint(49.4407432291511f);
    dynamicGraph1.addDataPoint(58.2554618868898f);
    dynamicGraph1.addDataPoint(61.7175691806896f);
    dynamicGraph1.addDataPoint(59.8193440994186f);
    dynamicGraph1.addDataPoint(53.9647889363169f);
    dynamicGraph1.addDataPoint(46.5884353738452f);
    dynamicGraph1.addDataPoint(40.5193738733546f);
    dynamicGraph1.addDataPoint(38.2478071725895f);
    dynamicGraph1.addDataPoint(41.2753221341369f);
    dynamicGraph1.addDataPoint(49.7095590541239f);
    dynamicGraph1.addDataPoint(62.2040149632109f);
    dynamicGraph1.addDataPoint(76.2590703871616f);
    dynamicGraph1.addDataPoint(88.811679956001f);
    dynamicGraph1.addDataPoint(96.9702374364698f);
    dynamicGraph1.addDataPoint(98.7152981417737f);
    dynamicGraph1.addDataPoint(93.3948841388844f);
    dynamicGraph1.addDataPoint(81.8930705562608f);
    dynamicGraph1.addDataPoint(66.4302184752315f);
    dynamicGraph1.addDataPoint(50.0431023315935f);
    dynamicGraph1.addDataPoint(35.8712639645931f);
    dynamicGraph1.addDataPoint(26.42313110339f);
    dynamicGraph1.addDataPoint(23.0001924395672f);
    dynamicGraph1.addDataPoint(25.4186814492858f);
    dynamicGraph1.addDataPoint(32.0953076787007f);
    dynamicGraph1.addDataPoint(40.474414495256f);
    dynamicGraph1.addDataPoint(47.6904101287104f);
    dynamicGraph1.addDataPoint(51.3018199967457f);
    dynamicGraph1.addDataPoint(49.9159442387373f);
    dynamicGraph1.addDataPoint(43.5501125506104f);
    dynamicGraph1.addDataPoint(33.6402768901792f);
    dynamicGraph1.addDataPoint(22.6943292718603f);
    dynamicGraph1.addDataPoint(13.6748282544424f);
    dynamicGraph1.addDataPoint(9.26239526103545f);
    dynamicGraph1.addDataPoint(11.1805735947719f);
    dynamicGraph1.addDataPoint(19.748202127922f);
    dynamicGraph1.addDataPoint(33.7699182439543f);
    dynamicGraph1.addDataPoint(50.7928524012751f);
    dynamicGraph1.addDataPoint(67.6681026218629f);
    dynamicGraph1.addDataPoint(81.2810729151665f);
    dynamicGraph1.addDataPoint(89.2734896551194f);
    dynamicGraph1.addDataPoint(90.58193237475f);
    dynamicGraph1.addDataPoint(85.6625788707832f);
    dynamicGraph1.addDataPoint(76.3485599632322f);
    dynamicGraph1.addDataPoint(65.3760795367797f);
    dynamicGraph1.addDataPoint(55.696325712222f);
    dynamicGraph1.addDataPoint(49.7423623733714f);
    dynamicGraph1.addDataPoint(48.8309139331979f);
    dynamicGraph1.addDataPoint(52.8456065136649f);
    dynamicGraph1.addDataPoint(60.2789969276101f);
    dynamicGraph1.addDataPoint(68.6225573612057f);

    add(Background);
    add(VoltageReadBack);
    add(VoltageSetBack);
    add(VoltageRead);
    add(VoltageSet);
    add(VoltageSetClick);
    add(Settings);
    add(Settings_1);
    add(PowerReadPrimBack);
    add(AmprageSetBack);
    add(PowerReadSecBack);
    add(PowerReadPrim);
    add(AmprageSet);
    add(PowerReadSec);
    add(PowerReadSecClick);
    add(AmprageSetClick);
    add(dynamicGraph1);
}

void OneForthBase::initialize()
{

}

