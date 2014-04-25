//
//  BTROpenGLView.h
//  BlackTriangle
//
//  Created by Tim Davies on 16/10/2013.
//  Copyright (c) 2013 Tim Davies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface BTROpenGLView : UIView {
    CAEAGLLayer *__eaglLayer;
    EAGLContext *__context;
    GLuint      __colorRenderBuffer;
    GLuint _positionSlot;
    GLuint _colorSlot;
    GLuint _projectionUniform;
    GLuint _modelViewUniform;
    GLuint _depthRenderBuffer;
    float _currentRotation;
    
    GLuint _vertexBuffer;
    GLuint _indexBuffer;
    GLuint _vertexBuffer2;
    GLuint _indexBuffer2;
    
    // Textures
    GLuint _floorTexture;
    GLuint _fishTexture;
    GLuint _texCoordSlot;
    GLuint _textureUniform;
}

@end
