#ifndef BRAIN_H
#define BRAIN_H

//#define NEURON_COUNT 9

//John Balis 2018
//for support email balisujohn@gmail.com 

class Neuron
{
float age;
int targetCount;
int fired;
float activationPotential;
float excitation;
Neuron 
}





struct neuron{
float age;
int targetCount;
int fired;
float activationDuration;
float activationPotential;
float excitation;
float mostRecentActivation;
int * targets;
float * potentialWeights;
float * potentialTimes;
} typedef neuron;

struct brain{
neuron * neurons;
int neuronCount;
float age;
} typedef brain;

brain * generateBasicBrain();
brain * generateSparseBrain();
brain * generateXorBrain();
void mutateBrain(brain * b,int minInputCount,int minOutputCount);
void advanceBrain(brain * b, int inputs[], int inputCount,int outputs[], int outputCount);
brain * forkBrain(brain * oldBrain);
void freeBrain(brain * b );
void printBrain(brain * b );
void printBrainToFile(brain * b, FILE * fp);


#endif
