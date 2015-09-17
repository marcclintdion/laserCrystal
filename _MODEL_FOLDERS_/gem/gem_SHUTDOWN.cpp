                    if(gem_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &gem_NORMALMAP);                                                                                
                            gem_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(gem_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &gem_TEXTUREMAP);                                                                               
                            gem_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(gem_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &gem_VBO);                                                                                       
                            gem_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(gem_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &gem_INDICES_VBO);                                                                               
                            gem_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
