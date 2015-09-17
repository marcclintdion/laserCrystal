    glBindBuffer(GL_ARRAY_BUFFER, gem_VBO);                                                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, gem_INDICES_VBO);                                                                                                                                
    //----------------------------------------------------------------------------------------------------------------------------------------------           
    Translate(modelView, gem_POSITION[0], gem_POSITION[1], gem_POSITION[2]);                          
    Rotate(modelView, gem_ROTATE[0], gem_ROTATE[1], gem_ROTATE[2], gem_ROTATE[3]); 

//======================================================================================================                                                       
    SelectShader(shaderNumber);                                                                                                                              
//======================================================================================================                                                       

    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, gem_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, gem_TEXTUREMAP);                                                                                           
    //---------------------------------------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 72, GL_UNSIGNED_INT, 0);                                                                                                     

