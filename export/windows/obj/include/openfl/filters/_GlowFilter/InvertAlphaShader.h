// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl_filters__GlowFilter_InvertAlphaShader
#define INCLUDED_openfl_filters__GlowFilter_InvertAlphaShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS3(openfl,filters,_GlowFilter,InvertAlphaShader)

namespace openfl{
namespace filters{
namespace _GlowFilter{


class HXCPP_CLASS_ATTRIBUTES InvertAlphaShader_obj : public  ::openfl::filters::BitmapFilterShader_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilterShader_obj super;
		typedef InvertAlphaShader_obj OBJ_;
		InvertAlphaShader_obj();

	public:
		enum { _hx_ClassId = 0x6aedba14 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters._GlowFilter.InvertAlphaShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.filters._GlowFilter.InvertAlphaShader"); }
		static hx::ObjectPtr< InvertAlphaShader_obj > __new();
		static hx::ObjectPtr< InvertAlphaShader_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InvertAlphaShader_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InvertAlphaShader",8d,f1,62,b4); }

};

} // end namespace openfl
} // end namespace filters
} // end namespace _GlowFilter

#endif /* INCLUDED_openfl_filters__GlowFilter_InvertAlphaShader */ 
