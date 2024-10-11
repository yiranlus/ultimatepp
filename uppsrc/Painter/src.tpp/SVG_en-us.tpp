topic "SVG support";
[H6;0 $$1,0#05600065144404261032431302351956:begin]
[i448;a25;kKO9;2 $$2,0#37138531426314131252341829483370:codeitem]
[l288;2 $$3,0#27521748481378242620020725143825:desc]
[0 $$4,0#96390100711032703541132217272105:end]
[i448;a25;kKO9; $$5,0#37138531426314131252341829483380:structitem]
[ $$0,0#00000000000000000000000000000000:Default]
[{_}%EN-US 
[ {{10000@(113.42.0) [s0; [*@(229)4 SVG support]]}}&]
[s4;%- &]
[s2;:Upp`:`:RenderSVG`(Upp`:`:Painter`&`,const char`*`,Event`):%- [@(0.0.255) bool] 
[* RenderSVG](Painter[@(0.0.255) `&] [*@3 p], [@(0.0.255) const] [@(0.0.255) char] 
[@(0.0.255) `*][*@3 svg], Event<String, String[@(0.0.255) `&]> [*@3 resloader])&]
[s2;:RenderSVG`(Painter`&`,const char`*`): [@(0.0.255) bool]_[* RenderSVG]([_^Painter^ Pain
ter][@(0.0.255) `&]_[*@3 p], [@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 svg])&]
[s3; Renders [*@3 svg ]to Painter [*@3 p]. Use [*@3 resloader] to provide 
resources like images, first String of callback is resource name 
(filename), the data is to be returned in second parameter. Return 
empty String if resource not found..&]
[s4;%- &]
[s1; &]
[s2;:GetSVGDimensions`(const char`*`,Sizef`&`,Rectf`&`): [@(0.0.255) void]_[* GetSVGDimen
sions]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 svg], [_^Sizef^ Sizef][@(0.0.255) `&]_[*@3 s
z], [_^Rectf^ Rectf][@(0.0.255) `&]_[*@3 viewbox])&]
[s3; Returns size and viewbox attributes of SVG.&]
[s4; &]
[s1; &]
[s2;:GetSVGBoundingBox`(const char`*`): [_^Rectf^ Rectf]_[* GetSVGBoundingBox]([@(0.0.255) c
onst]_[@(0.0.255) char]_`*[*@3 svg])&]
[s3; Computes the complete bounding box of SVG.&]
[s4; &]
[s1;%- &]
[s2;:Upp`:`:GetSVGPathBoundingBox`(const char`*`):%- [_^Upp`:`:Rectf^ Rectf]_[* GetSVGPat
hBoundingBox]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 path])&]
[s3; Returns the bounding box of [%-*@3 SVG] path stored in path element 
format.&]
[s4; &]
[s1;%- &]
[s2;:Upp`:`:RenderSVGImage`(Upp`:`:Size`,const char`*`,Event`):%- Image 
[* RenderSVGImage](Size [*@3 sz], [@(0.0.255) const] [@(0.0.255) char] 
[@(0.0.255) `*][*@3 svg], Event<String, String[@(0.0.255) `&]> [*@3 resloader])&]
[s2;:RenderSVGImage`(Size`,const char`*`): [_^Image^ Image]_[* RenderSVGImage]([_^Size^ Siz
e]_[*@3 sz], [@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 svg])&]
[s3; Renders SVG into Image. This function basically ignores dimensions 
specified in SVG and uses computed bounding box. It is then scaled 
into [*@3 sz] at maximum size preserving aspect ratio. Use [*@3 resloader] 
to provide resources like images.&]
[s4; &]
[s1;%- &]
[s2;:Upp`:`:IsSVG`(const char`*`):%- [@(0.0.255) bool]_[* IsSVG]([@(0.0.255) const]_[@(0.0.255) c
har]_`*[*@3 svg])&]
[s3; Returns true if [%-*@3 svg] likely contains SVG image.&]
[s4; &]
[s0; ]]