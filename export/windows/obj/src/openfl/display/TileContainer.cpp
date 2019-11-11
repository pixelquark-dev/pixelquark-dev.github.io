// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_TileContainer
#include <openfl/display/TileContainer.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_37_new,"openfl.display.TileContainer","new",0x2eee5efb,"openfl.display.TileContainer.new","openfl/display/TileContainer.hx",37,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_54_addTile,"openfl.display.TileContainer","addTile",0x324f860a,"openfl.display.TileContainer.addTile","openfl/display/TileContainer.hx",54,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_90_addTileAt,"openfl.display.TileContainer","addTileAt",0x09c4d59d,"openfl.display.TileContainer.addTileAt","openfl/display/TileContainer.hx",90,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_117_addTiles,"openfl.display.TileContainer","addTiles",0xd345c329,"openfl.display.TileContainer.addTiles","openfl/display/TileContainer.hx",117,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_127_clone,"openfl.display.TileContainer","clone",0x3db2beb8,"openfl.display.TileContainer.clone","openfl/display/TileContainer.hx",127,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_148_contains,"openfl.display.TileContainer","contains",0x762ef9a4,"openfl.display.TileContainer.contains","openfl/display/TileContainer.hx",148,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_159_getBounds,"openfl.display.TileContainer","getBounds",0x15ec0486,"openfl.display.TileContainer.getBounds","openfl/display/TileContainer.hx",159,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_185_getTileAt,"openfl.display.TileContainer","getTileAt",0xcdf729d2,"openfl.display.TileContainer.getTileAt","openfl/display/TileContainer.hx",185,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_201_getTileIndex,"openfl.display.TileContainer","getTileIndex",0x4280db93,"openfl.display.TileContainer.getTileIndex","openfl/display/TileContainer.hx",201,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_219_removeTile,"openfl.display.TileContainer","removeTile",0x9f9a5057,"openfl.display.TileContainer.removeTile","openfl/display/TileContainer.hx",219,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_240_removeTileAt,"openfl.display.TileContainer","removeTileAt",0x77108d2a,"openfl.display.TileContainer.removeTileAt","openfl/display/TileContainer.hx",240,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_256_removeTiles,"openfl.display.TileContainer","removeTiles",0x076bfc3c,"openfl.display.TileContainer.removeTiles","openfl/display/TileContainer.hx",256,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_303_setTileIndex,"openfl.display.TileContainer","setTileIndex",0x5779ff07,"openfl.display.TileContainer.setTileIndex","openfl/display/TileContainer.hx",303,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_328_sortTiles,"openfl.display.TileContainer","sortTiles",0x4c20c622,"openfl.display.TileContainer.sortTiles","openfl/display/TileContainer.hx",328,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_343_swapTiles,"openfl.display.TileContainer","swapTiles",0xb95a02cd,"openfl.display.TileContainer.swapTiles","openfl/display/TileContainer.hx",343,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_364_swapTilesAt,"openfl.display.TileContainer","swapTilesAt",0x45fa4920,"openfl.display.TileContainer.swapTilesAt","openfl/display/TileContainer.hx",364,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_376_get_numTiles,"openfl.display.TileContainer","get_numTiles",0x6c190b6d,"openfl.display.TileContainer.get_numTiles","openfl/display/TileContainer.hx",376,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_380_get_height,"openfl.display.TileContainer","get_height",0xc851c275,"openfl.display.TileContainer.get_height","openfl/display/TileContainer.hx",380,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_407_set_height,"openfl.display.TileContainer","set_height",0xcbcf60e9,"openfl.display.TileContainer.set_height","openfl/display/TileContainer.hx",407,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_436_get_width,"openfl.display.TileContainer","get_width",0x41840738,"openfl.display.TileContainer.get_width","openfl/display/TileContainer.hx",436,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_463_set_width,"openfl.display.TileContainer","set_width",0x24d4f344,"openfl.display.TileContainer.set_width","openfl/display/TileContainer.hx",463,0x026ee5d7)
namespace openfl{
namespace display{

void TileContainer_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float scaleX = __o_scaleX.Default(1);
            		Float scaleY = __o_scaleY.Default(1);
            		Float rotation = __o_rotation.Default(0);
            		Float originX = __o_originX.Default(0);
            		Float originY = __o_originY.Default(0);
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_37_new)
HXLINE(  38)		super::__construct(-1,x,y,scaleX,scaleY,rotation,originX,originY);
HXLINE(  40)		this->_hx___tiles = ::Array_obj< ::Dynamic>::__new();
HXLINE(  41)		this->__length = 0;
            	}

Dynamic TileContainer_obj::__CreateEmpty() { return new TileContainer_obj; }

void *TileContainer_obj::_hx_vtable = 0;

Dynamic TileContainer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TileContainer_obj > _hx_result = new TileContainer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool TileContainer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4b539fa1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4b539fa1;
	} else {
		return inClassId==(int)0x555b129c;
	}
}

static ::openfl::display::ITileContainer_obj _hx_openfl_display_TileContainer__hx_openfl_display_ITileContainer= {
	( int (hx::Object::*)())&::openfl::display::TileContainer_obj::get_numTiles,
	(  ::openfl::display::Tile (hx::Object::*)( ::openfl::display::Tile))&::openfl::display::TileContainer_obj::addTile,
	(  ::openfl::display::Tile (hx::Object::*)( ::openfl::display::Tile,int))&::openfl::display::TileContainer_obj::addTileAt,
	( ::Array< ::Dynamic> (hx::Object::*)(::Array< ::Dynamic>))&::openfl::display::TileContainer_obj::addTiles,
	( bool (hx::Object::*)( ::openfl::display::Tile))&::openfl::display::TileContainer_obj::contains,
	(  ::openfl::display::Tile (hx::Object::*)(int))&::openfl::display::TileContainer_obj::getTileAt,
	( int (hx::Object::*)( ::openfl::display::Tile))&::openfl::display::TileContainer_obj::getTileIndex,
	(  ::openfl::display::Tile (hx::Object::*)( ::openfl::display::Tile))&::openfl::display::TileContainer_obj::removeTile,
	(  ::openfl::display::Tile (hx::Object::*)(int))&::openfl::display::TileContainer_obj::removeTileAt,
	( void (hx::Object::*)(hx::Null< int > ,hx::Null< int > ))&::openfl::display::TileContainer_obj::removeTiles,
	( void (hx::Object::*)( ::openfl::display::Tile,int))&::openfl::display::TileContainer_obj::setTileIndex,
	( void (hx::Object::*)( ::Dynamic))&::openfl::display::TileContainer_obj::sortTiles,
	( void (hx::Object::*)( ::openfl::display::Tile, ::openfl::display::Tile))&::openfl::display::TileContainer_obj::swapTiles,
	( void (hx::Object::*)(int,int))&::openfl::display::TileContainer_obj::swapTilesAt,
};

void *TileContainer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xcad54adc: return &_hx_openfl_display_TileContainer__hx_openfl_display_ITileContainer;
	}
	return super::_hx_getInterface(inHash);
}

 ::openfl::display::Tile TileContainer_obj::addTile( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_54_addTile)
HXLINE(  55)		if (hx::IsNull( tile )) {
HXLINE(  55)			return null();
            		}
HXLINE(  57)		if (hx::IsEq( tile->parent,hx::ObjectPtr<OBJ_>(this) )) {
HXLINE(  59)			this->_hx___tiles->remove(tile);
HXLINE(  60)			this->__length--;
            		}
HXLINE(  63)		this->_hx___tiles[this->get_numTiles()] = tile;
HXLINE(  64)		tile->parent = hx::ObjectPtr<OBJ_>(this);
HXLINE(  65)		this->__length++;
HXLINE(  67)		this->_hx___setRenderDirty();
HXLINE(  69)		return tile;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,addTile,return )

 ::openfl::display::Tile TileContainer_obj::addTileAt( ::openfl::display::Tile tile,int index){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_90_addTileAt)
HXLINE(  91)		if (hx::IsNull( tile )) {
HXLINE(  91)			return null();
            		}
HXLINE(  93)		if (hx::IsEq( tile->parent,hx::ObjectPtr<OBJ_>(this) )) {
HXLINE(  95)			this->_hx___tiles->remove(tile);
HXLINE(  96)			this->__length--;
            		}
HXLINE(  99)		this->_hx___tiles->insert(index,tile);
HXLINE( 100)		tile->parent = hx::ObjectPtr<OBJ_>(this);
HXLINE( 101)		this->__length++;
HXLINE( 103)		this->_hx___setRenderDirty();
HXLINE( 105)		return tile;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileContainer_obj,addTileAt,return )

::Array< ::Dynamic> TileContainer_obj::addTiles(::Array< ::Dynamic> tiles){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_117_addTiles)
HXLINE( 118)		{
HXLINE( 118)			int _g = 0;
HXDLIN( 118)			while((_g < tiles->length)){
HXLINE( 118)				 ::openfl::display::Tile tile = tiles->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 118)				_g = (_g + 1);
HXLINE( 120)				this->addTile(tile);
            			}
            		}
HXLINE( 123)		return tiles;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,addTiles,return )

 ::openfl::display::Tile TileContainer_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_127_clone)
HXLINE( 128)		 ::openfl::display::TileContainer group =  ::openfl::display::TileContainer_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null());
HXLINE( 129)		{
HXLINE( 129)			int _g = 0;
HXDLIN( 129)			::Array< ::Dynamic> _g1 = this->_hx___tiles;
HXDLIN( 129)			while((_g < _g1->length)){
HXLINE( 129)				 ::openfl::display::Tile tile = _g1->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 129)				_g = (_g + 1);
HXLINE( 131)				group->addTile(tile->clone());
            			}
            		}
HXLINE( 133)		return group;
            	}


bool TileContainer_obj::contains( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_148_contains)
HXDLIN( 148)		return (this->_hx___tiles->indexOf(tile,null()) > -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,contains,return )

 ::openfl::geom::Rectangle TileContainer_obj::getBounds( ::openfl::display::Tile targetCoordinateSpace){
            	HX_GC_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_159_getBounds)
HXLINE( 160)		 ::openfl::geom::Rectangle result =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 161)		 ::openfl::geom::Rectangle rect = null();
HXLINE( 163)		{
HXLINE( 163)			int _g = 0;
HXDLIN( 163)			::Array< ::Dynamic> _g1 = this->_hx___tiles;
HXDLIN( 163)			while((_g < _g1->length)){
HXLINE( 163)				 ::openfl::display::Tile tile = _g1->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 163)				_g = (_g + 1);
HXLINE( 166)				rect = tile->getBounds(targetCoordinateSpace);
HXLINE( 171)				result->_hx___expand(rect->x,rect->y,rect->width,rect->height);
            			}
            		}
HXLINE( 175)		return result;
            	}


 ::openfl::display::Tile TileContainer_obj::getTileAt(int index){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_185_getTileAt)
HXLINE( 186)		bool _hx_tmp;
HXDLIN( 186)		if ((index >= 0)) {
HXLINE( 186)			_hx_tmp = (index < this->get_numTiles());
            		}
            		else {
HXLINE( 186)			_hx_tmp = false;
            		}
HXDLIN( 186)		if (_hx_tmp) {
HXLINE( 188)			return this->_hx___tiles->__get(index).StaticCast<  ::openfl::display::Tile >();
            		}
HXLINE( 191)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,getTileAt,return )

int TileContainer_obj::getTileIndex( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_201_getTileIndex)
HXLINE( 202)		{
HXLINE( 202)			int _g = 0;
HXDLIN( 202)			int _g1 = this->_hx___tiles->length;
HXDLIN( 202)			while((_g < _g1)){
HXLINE( 202)				_g = (_g + 1);
HXDLIN( 202)				int i = (_g - 1);
HXLINE( 204)				if (hx::IsEq( this->_hx___tiles->__get(i).StaticCast<  ::openfl::display::Tile >(),tile )) {
HXLINE( 204)					return i;
            				}
            			}
            		}
HXLINE( 207)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,getTileIndex,return )

 ::openfl::display::Tile TileContainer_obj::removeTile( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_219_removeTile)
HXLINE( 220)		bool _hx_tmp;
HXDLIN( 220)		if (hx::IsNotNull( tile )) {
HXLINE( 220)			_hx_tmp = hx::IsEq( tile->parent,hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 220)			_hx_tmp = false;
            		}
HXDLIN( 220)		if (_hx_tmp) {
HXLINE( 222)			tile->parent = null();
HXLINE( 223)			this->_hx___tiles->remove(tile);
HXLINE( 224)			this->__length--;
HXLINE( 225)			this->_hx___setRenderDirty();
            		}
HXLINE( 228)		return tile;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,removeTile,return )

 ::openfl::display::Tile TileContainer_obj::removeTileAt(int index){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_240_removeTileAt)
HXLINE( 241)		bool _hx_tmp;
HXDLIN( 241)		if ((index >= 0)) {
HXLINE( 241)			_hx_tmp = (index < this->get_numTiles());
            		}
            		else {
HXLINE( 241)			_hx_tmp = false;
            		}
HXDLIN( 241)		if (_hx_tmp) {
HXLINE( 243)			return this->removeTile(this->_hx___tiles->__get(index).StaticCast<  ::openfl::display::Tile >());
            		}
HXLINE( 246)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,removeTileAt,return )

void TileContainer_obj::removeTiles(hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_256_removeTiles)
HXLINE( 257)		if ((beginIndex < 0)) {
HXLINE( 257)			beginIndex = 0;
            		}
HXLINE( 258)		if ((endIndex > (this->_hx___tiles->length - 1))) {
HXLINE( 258)			endIndex = (this->_hx___tiles->length - 1);
            		}
HXLINE( 260)		::Array< ::Dynamic> removed = this->_hx___tiles->splice(beginIndex,((endIndex - beginIndex) + 1));
HXLINE( 261)		{
HXLINE( 261)			int _g = 0;
HXDLIN( 261)			while((_g < removed->length)){
HXLINE( 261)				 ::openfl::display::Tile tile = removed->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 261)				_g = (_g + 1);
HXLINE( 263)				tile->parent = null();
            			}
            		}
HXLINE( 265)		this->__length = this->_hx___tiles->length;
HXLINE( 267)		this->_hx___setRenderDirty();
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileContainer_obj,removeTiles,(void))

void TileContainer_obj::setTileIndex( ::openfl::display::Tile tile,int index){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_303_setTileIndex)
HXDLIN( 303)		bool _hx_tmp;
HXDLIN( 303)		bool _hx_tmp1;
HXDLIN( 303)		if ((index >= 0)) {
HXDLIN( 303)			_hx_tmp1 = (index <= this->get_numTiles());
            		}
            		else {
HXDLIN( 303)			_hx_tmp1 = false;
            		}
HXDLIN( 303)		if (_hx_tmp1) {
HXDLIN( 303)			_hx_tmp = hx::IsEq( tile->parent,hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 303)			_hx_tmp = false;
            		}
HXDLIN( 303)		if (_hx_tmp) {
HXLINE( 305)			this->_hx___tiles->remove(tile);
HXLINE( 306)			this->_hx___tiles->insert(index,tile);
HXLINE( 307)			this->_hx___setRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileContainer_obj,setTileIndex,(void))

void TileContainer_obj::sortTiles( ::Dynamic compareFunction){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_328_sortTiles)
HXLINE( 329)		this->_hx___tiles->sort(compareFunction);
HXLINE( 330)		this->_hx___setRenderDirty();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,sortTiles,(void))

void TileContainer_obj::swapTiles( ::openfl::display::Tile tile1, ::openfl::display::Tile tile2){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_343_swapTiles)
HXDLIN( 343)		bool _hx_tmp;
HXDLIN( 343)		if (hx::IsEq( tile1->parent,hx::ObjectPtr<OBJ_>(this) )) {
HXDLIN( 343)			_hx_tmp = hx::IsEq( tile2->parent,hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 343)			_hx_tmp = false;
            		}
HXDLIN( 343)		if (_hx_tmp) {
HXLINE( 345)			int index1 = this->_hx___tiles->indexOf(tile1,null());
HXLINE( 346)			int index2 = this->_hx___tiles->indexOf(tile2,null());
HXLINE( 348)			this->_hx___tiles[index1] = tile2;
HXLINE( 349)			this->_hx___tiles[index2] = tile1;
HXLINE( 351)			this->_hx___setRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileContainer_obj,swapTiles,(void))

void TileContainer_obj::swapTilesAt(int index1,int index2){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_364_swapTilesAt)
HXLINE( 365)		 ::openfl::display::Tile swap = this->_hx___tiles->__get(index1).StaticCast<  ::openfl::display::Tile >();
HXLINE( 366)		this->_hx___tiles[index1] = this->_hx___tiles->__get(index2).StaticCast<  ::openfl::display::Tile >();
HXLINE( 367)		this->_hx___tiles[index2] = swap;
HXLINE( 368)		swap = null();
HXLINE( 370)		this->_hx___setRenderDirty();
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileContainer_obj,swapTilesAt,(void))

int TileContainer_obj::get_numTiles(){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_376_get_numTiles)
HXDLIN( 376)		return this->__length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TileContainer_obj,get_numTiles,return )

Float TileContainer_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_380_get_height)
HXLINE( 381)		 ::openfl::geom::Rectangle result = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 382)		 ::openfl::geom::Rectangle rect = null();
HXLINE( 384)		{
HXLINE( 384)			int _g = 0;
HXDLIN( 384)			::Array< ::Dynamic> _g1 = this->_hx___tiles;
HXDLIN( 384)			while((_g < _g1->length)){
HXLINE( 384)				 ::openfl::display::Tile tile = _g1->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 384)				_g = (_g + 1);
HXLINE( 387)				rect = tile->getBounds(hx::ObjectPtr<OBJ_>(this));
HXLINE( 392)				result->_hx___expand(rect->x,rect->y,rect->width,rect->height);
            			}
            		}
HXLINE( 396)		this->_hx___getBounds(result,this->get_matrix());
HXLINE( 398)		Float h = result->height;
HXLINE( 400)		::openfl::geom::Rectangle_obj::_hx___pool->release(result);
HXLINE( 403)		return h;
            	}


Float TileContainer_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_407_set_height)
HXLINE( 408)		 ::openfl::geom::Rectangle result = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 409)		 ::openfl::geom::Rectangle rect = null();
HXLINE( 411)		{
HXLINE( 411)			int _g = 0;
HXDLIN( 411)			::Array< ::Dynamic> _g1 = this->_hx___tiles;
HXDLIN( 411)			while((_g < _g1->length)){
HXLINE( 411)				 ::openfl::display::Tile tile = _g1->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 411)				_g = (_g + 1);
HXLINE( 414)				rect = tile->getBounds(hx::ObjectPtr<OBJ_>(this));
HXLINE( 419)				result->_hx___expand(rect->x,rect->y,rect->width,rect->height);
            			}
            		}
HXLINE( 423)		if ((result->height != 0)) {
HXLINE( 425)			this->set_scaleY((value / result->height));
            		}
HXLINE( 429)		::openfl::geom::Rectangle_obj::_hx___pool->release(result);
HXLINE( 432)		return value;
            	}


Float TileContainer_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_436_get_width)
HXLINE( 437)		 ::openfl::geom::Rectangle result = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 438)		 ::openfl::geom::Rectangle rect = null();
HXLINE( 440)		{
HXLINE( 440)			int _g = 0;
HXDLIN( 440)			::Array< ::Dynamic> _g1 = this->_hx___tiles;
HXDLIN( 440)			while((_g < _g1->length)){
HXLINE( 440)				 ::openfl::display::Tile tile = _g1->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 440)				_g = (_g + 1);
HXLINE( 443)				rect = tile->getBounds(hx::ObjectPtr<OBJ_>(this));
HXLINE( 448)				result->_hx___expand(rect->x,rect->y,rect->width,rect->height);
            			}
            		}
HXLINE( 452)		this->_hx___getBounds(result,this->get_matrix());
HXLINE( 454)		Float w = result->width;
HXLINE( 456)		::openfl::geom::Rectangle_obj::_hx___pool->release(result);
HXLINE( 459)		return w;
            	}


Float TileContainer_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_463_set_width)
HXLINE( 464)		 ::openfl::geom::Rectangle result = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 465)		 ::openfl::geom::Rectangle rect = null();
HXLINE( 467)		{
HXLINE( 467)			int _g = 0;
HXDLIN( 467)			::Array< ::Dynamic> _g1 = this->_hx___tiles;
HXDLIN( 467)			while((_g < _g1->length)){
HXLINE( 467)				 ::openfl::display::Tile tile = _g1->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 467)				_g = (_g + 1);
HXLINE( 470)				rect = tile->getBounds(hx::ObjectPtr<OBJ_>(this));
HXLINE( 475)				result->_hx___expand(rect->x,rect->y,rect->width,rect->height);
            			}
            		}
HXLINE( 479)		if ((result->width != 0)) {
HXLINE( 481)			this->set_scaleX((value / result->width));
            		}
HXLINE( 485)		::openfl::geom::Rectangle_obj::_hx___pool->release(result);
HXLINE( 488)		return value;
            	}



hx::ObjectPtr< TileContainer_obj > TileContainer_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY) {
	hx::ObjectPtr< TileContainer_obj > __this = new TileContainer_obj();
	__this->__construct(__o_x,__o_y,__o_scaleX,__o_scaleY,__o_rotation,__o_originX,__o_originY);
	return __this;
}

hx::ObjectPtr< TileContainer_obj > TileContainer_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY) {
	TileContainer_obj *__this = (TileContainer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TileContainer_obj), true, "openfl.display.TileContainer"));
	*(void **)__this = TileContainer_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_scaleX,__o_scaleY,__o_rotation,__o_originX,__o_originY);
	return __this;
}

TileContainer_obj::TileContainer_obj()
{
}

void TileContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileContainer);
	HX_MARK_MEMBER_NAME(_hx___tiles,"__tiles");
	 ::openfl::display::Tile_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___tiles,"__tiles");
	 ::openfl::display::Tile_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TileContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__tiles") ) { return hx::Val( _hx___tiles ); }
		if (HX_FIELD_EQ(inName,"addTile") ) { return hx::Val( addTile_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_numTiles() ); }
		if (HX_FIELD_EQ(inName,"addTiles") ) { return hx::Val( addTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return hx::Val( contains_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addTileAt") ) { return hx::Val( addTileAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return hx::Val( getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileAt") ) { return hx::Val( getTileAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"sortTiles") ) { return hx::Val( sortTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapTiles") ) { return hx::Val( swapTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeTile") ) { return hx::Val( removeTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeTiles") ) { return hx::Val( removeTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapTilesAt") ) { return hx::Val( swapTilesAt_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTileIndex") ) { return hx::Val( getTileIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeTileAt") ) { return hx::Val( removeTileAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileIndex") ) { return hx::Val( setTileIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numTiles") ) { return hx::Val( get_numTiles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TileContainer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__tiles") ) { _hx___tiles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numTiles",5f,11,45,cd));
	outFields->push(HX_("__tiles",65,56,93,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo TileContainer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TileContainer_obj,_hx___tiles),HX_("__tiles",65,56,93,7a)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TileContainer_obj_sStaticStorageInfo = 0;
#endif

static ::String TileContainer_obj_sMemberFields[] = {
	HX_("__tiles",65,56,93,7a),
	HX_("addTile",ef,0d,3a,89),
	HX_("addTileAt",c2,e0,4c,d6),
	HX_("addTiles",a4,23,92,89),
	HX_("clone",5d,13,63,48),
	HX_("contains",1f,5a,7b,2c),
	HX_("getBounds",ab,0f,74,e2),
	HX_("getTileAt",f7,34,7f,9a),
	HX_("getTileIndex",8e,95,c6,58),
	HX_("removeTile",92,05,1c,ca),
	HX_("removeTileAt",25,47,56,8d),
	HX_("removeTiles",a1,da,68,0e),
	HX_("setTileIndex",02,b9,bf,6d),
	HX_("sortTiles",47,d1,a8,18),
	HX_("swapTiles",f2,0d,e2,85),
	HX_("swapTilesAt",85,27,f7,4c),
	HX_("get_numTiles",68,c5,5e,82),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	::String(null()) };

hx::Class TileContainer_obj::__mClass;

void TileContainer_obj::__register()
{
	TileContainer_obj _hx_dummy;
	TileContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display.TileContainer",89,c5,06,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TileContainer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TileContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TileContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TileContainer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
