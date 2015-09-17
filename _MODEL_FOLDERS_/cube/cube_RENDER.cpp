    glBindBuffer(GL_ARRAY_BUFFER, cube_VBO);                                                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, cube_INDICES_VBO);                                                                                                                                
    //----------------------------------------------------------------------------------------------------------------------------------------------           
    Translate(modelView, cube_POSITION[0], cube_POSITION[1], cube_POSITION[2]);                          
    Rotate(modelView, cube_ROTATE[0], cube_ROTATE[1], cube_ROTATE[2], cube_ROTATE[3]); 

//======================================================================================================                                                       
    SelectShader(shaderNumber);                                                                                                                              
//======================================================================================================                                                       

    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, cube_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, cube_TEXTUREMAP);                                                                                           
    //---------------------------------------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);                                                                                                     

