// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl__internal_formats_swf_ShapeCommand
#define INCLUDED_openfl__internal_formats_swf_ShapeCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,formats,swf,ShapeCommand)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace _internal{
namespace formats{
namespace swf{


class ShapeCommand_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ShapeCommand_obj OBJ_;

	public:
		ShapeCommand_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("openfl._internal.formats.swf.ShapeCommand",78,32,71,a8); }
		::String __ToString() const { return HX_("ShapeCommand.",a4,28,4e,19) + _hx_tag; }

		static ::openfl::_internal::formats::swf::ShapeCommand BeginBitmapFill(int bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth);
		static ::Dynamic BeginBitmapFill_dyn();
		static ::openfl::_internal::formats::swf::ShapeCommand BeginFill(int color,Float alpha);
		static ::Dynamic BeginFill_dyn();
		static ::openfl::_internal::formats::swf::ShapeCommand BeginGradientFill( ::Dynamic fillType,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio);
		static ::Dynamic BeginGradientFill_dyn();
		static ::openfl::_internal::formats::swf::ShapeCommand CurveTo(Float controlX,Float controlY,Float anchorX,Float anchorY);
		static ::Dynamic CurveTo_dyn();
		static ::openfl::_internal::formats::swf::ShapeCommand EndFill;
		static inline ::openfl::_internal::formats::swf::ShapeCommand EndFill_dyn() { return EndFill; }
		static ::openfl::_internal::formats::swf::ShapeCommand LineStyle( ::Dynamic thickness, ::Dynamic color, ::Dynamic alpha, ::Dynamic pixelHinting, ::Dynamic scaleMode, ::Dynamic caps, ::Dynamic joints, ::Dynamic miterLimit);
		static ::Dynamic LineStyle_dyn();
		static ::openfl::_internal::formats::swf::ShapeCommand LineTo(Float x,Float y);
		static ::Dynamic LineTo_dyn();
		static ::openfl::_internal::formats::swf::ShapeCommand MoveTo(Float x,Float y);
		static ::Dynamic MoveTo_dyn();
};

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace swf

#endif /* INCLUDED_openfl__internal_formats_swf_ShapeCommand */ 
