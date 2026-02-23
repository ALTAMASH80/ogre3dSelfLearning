#include <iostream>
#include "SdkSample.h"
#include "include/CharacterSample.h"
#include "Ogre.h"
#include "OgreApplicationContext.h"
#include "OgreInput.h"
#include "OgreRTShaderSystem.h"
#include "OgreCameraMan.h"

using namespace Ogre;
using namespace OgreBites;

int main(int argc, char *argv[])
{
    OgreBites::ApplicationContext ctx("OgreTutorialApp");
    ctx.initApp();
    {
        Sample_Character sample;
        sample.setShaderGenerator(Ogre::RTShader::ShaderGenerator::getSingletonPtr());
        sample._setup(&ctx);
        ctx.getRoot()->startRendering();
    }
    ctx.closeApp();
    return 0;
}
