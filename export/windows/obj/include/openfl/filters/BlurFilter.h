// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl_filters_BlurFilter
#define INCLUDED_openfl_filters_BlurFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS2(openfl,filters,BlurFilter)
HX_DECLARE_CLASS3(openfl,filters,_BlurFilter,BlurShader)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES BlurFilter_obj : public  ::openfl::filters::BitmapFilter_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilter_obj super;
		typedef BlurFilter_obj OBJ_;
		BlurFilter_obj();

	public:
		enum { _hx_ClassId = 0x4c5fda8a };

		void __construct(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters.BlurFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.filters.BlurFilter"); }
		static hx::ObjectPtr< BlurFilter_obj > __new(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality);
		static hx::ObjectPtr< BlurFilter_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlurFilter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlurFilter",df,d1,71,f3); }

		static void __boot();
		static  ::openfl::filters::_BlurFilter::BlurShader _hx___blurShader;
		Float _hx___blurX;
		Float _hx___blurY;
		int _hx___horizontalPasses;
		int _hx___quality;
		int _hx___verticalPasses;
		 ::openfl::filters::BitmapFilter clone();

		 ::openfl::display::BitmapData _hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint);

		 ::openfl::display::Shader _hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData);

		Float get_blurX();
		::Dynamic get_blurX_dyn();

		Float set_blurX(Float value);
		::Dynamic set_blurX_dyn();

		Float get_blurY();
		::Dynamic get_blurY_dyn();

		Float set_blurY(Float value);
		::Dynamic set_blurY_dyn();

		int get_quality();
		::Dynamic get_quality_dyn();

		int set_quality(int value);
		::Dynamic set_quality_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_BlurFilter */ 
