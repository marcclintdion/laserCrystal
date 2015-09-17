GLuint          fbo,
                color,
                depth,
                mainLightPass_fboId,
                mainLightPass_depth,
                textureID,
                fboId_3D,
                fboId,
                componentShaderPass_fbo,
                componentShaderPass_color,
                componentShaderPass_depth,
                flatten_3D_SHADOW_fboId,
                flatten_3D_SHADOW_TEXTURE,
                framebuffer,
                colorRenderbuffer,
                depthRenderbuffer;

//---------------------------------------------------------------------------------------

var           fieldOfView                                      =     30.0;


var           adjustNearFar[]                                  =  {  0.1, 250.0 };

//---------------------------------------------------------------------------------------
var           moveSet[]                                        =  {  0.0, 0, 0.0, 1.0};
//---------------------------------------------------------------------------------------
var           eyeposition[]                                    =  {0, 0.0, 10.6999, 0.0};
var           lookAt[]                                         =  {0, 0, 0, -10.0};
var           rotateModelWithLeftMouse[]                       =  {0.6, -0.3};
//---------------------------------------------------------------------------------------
var           scaleTurnTable                                   =     1.0;//=     0.01178;
//---------------------------------------------------------------------------------------
var           upVector[]             	                       =  {  0.0, 1.0, 0.0};
//---------------------------------------------------------------------------------------
                        
                               
                               
                               //====================================================================================
                               #include "_SHADERS/plastic/rubber/rubber_SHADER_GLOBALS.cpp"
                               //====================================================================================
                               #include "_MODEL_FOLDERS_/flowerShield/flowerShield_Globals.cpp"
                               //====================================================================================








