// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl_text_Font
#define INCLUDED_openfl_text_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(openfl,text,Font)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES Font_obj : public  ::lime::text::Font_obj
{
	public:
		typedef  ::lime::text::Font_obj super;
		typedef Font_obj OBJ_;
		Font_obj();

	public:
		enum { _hx_ClassId = 0x7d07fbf0 };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.text.Font")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.text.Font"); }
		static hx::ObjectPtr< Font_obj > __new(::String name);
		static hx::ObjectPtr< Font_obj > __alloc(hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Font_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Font",ef,89,99,2e); }

		static void __boot();
		static  ::haxe::ds::StringMap _hx___fontByName;
		static ::Array< ::Dynamic> _hx___registeredFonts;
		static ::Array< ::Dynamic> enumerateFonts(hx::Null< bool >  enumerateDeviceFonts);
		static ::Dynamic enumerateFonts_dyn();

		static  ::openfl::text::Font fromBytes( ::openfl::utils::ByteArrayData bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::openfl::text::Font fromFile(::String path);
		static ::Dynamic fromFile_dyn();

		static  ::lime::app::Future loadFromBytes( ::openfl::utils::ByteArrayData bytes);
		static ::Dynamic loadFromBytes_dyn();

		static  ::lime::app::Future loadFromFile(::String path);
		static ::Dynamic loadFromFile_dyn();

		static  ::lime::app::Future loadFromName(::String path);
		static ::Dynamic loadFromName_dyn();

		static void registerFont( ::Dynamic font);
		static ::Dynamic registerFont_dyn();

		 ::Dynamic fontStyle;
		 ::Dynamic fontType;
		bool _hx___initialized;
		void _hx___fromLimeFont( ::lime::text::Font font);
		::Dynamic _hx___fromLimeFont_dyn();

		bool _hx___initialize();
		::Dynamic _hx___initialize_dyn();

		::String get_fontName();
		::Dynamic get_fontName_dyn();

		::String set_fontName(::String value);
		::Dynamic set_fontName_dyn();

};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_Font */ 
