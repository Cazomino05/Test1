/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        game_sa/CParticleSystemManagerSA.h
*  PURPOSE:     Header file for particle system manager class
*  DEVELOPERS:  
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/

#pragma once

// calls particle emitters' VTBL + 0x8(CParticleEmitter::Activate)
#define FUNC_CParticleManagerSA__ActivateParticleEmitter                    0x4A4960

class CParticleManagerSAInterface
{
public:
    uint32 pad1;
    /***
     *  ACTUAL; Particle Emitter
     *              - (at ctor) calls Particle Activator ( some emitters use another one's activators)
     *  Particle Emitters have base in CParticleEmitterSAInterface* and extends it.
     */
    class CParticleEmitterSAInterface* pParticleEmitters;
    uint32 pad2;
    uint32 pad3;
    uint32 pad4;
};
C_ASSERT(sizeof(CParticleManagerSAInterface) == 0x14);
