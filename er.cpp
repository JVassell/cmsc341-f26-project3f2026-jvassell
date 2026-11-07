// CMSC 341 - Fall 2026 - Project 3
#include "er.h"
Hospital::Hospital(){ // empty object
  
}
Hospital::Hospital(prifn_t priFn, HEAPTYPE heapType, 
          STRUCTURE structure, int regPrior,
          int id)
{
    m_priorFunc = priFn;
    m_heapType = heapType;
    m_structure = structure;
    m_regPrior = regPrior;
    m_ID = id;
    m_heap = nullptr;
}
Hospital::~Hospital() {
  //NEED IMPLEMENTATION

  //POST ORDER RECURSIVE
}
void Hospital::clear() {
    //NEED IMPLEMENTATION

    //POST ORDER RECURSIVE WHILE RE-INITIALIZING MEMBER VARIABLES
    
}
Hospital::Hospital(const Hospital& rhs) {
    if(rhs.m_heap == nullptr) {
        this->m_heap = nullptr;
    }
  //NEED IMPLEMENTATION
}

Hospital& Hospital::operator=(const Hospital& rhs) {
    //NEED IMPLEMENTATION

    //DONT USE COPY CONSTRUCTOR
}
void Hospital::mergeWithQueue(Hospital& rhs) {
    //NEED IMPLEMENTATION

    //WORK ON FIRST, MOST IMPORTANT
}

bool Hospital::insertPatient(const Patient& patient) {
    //NEED IMPLEMENTATION

    //USE MERGE
}

int Hospital::numPatients() const {
    return m_size;
}
prifn_t Hospital::getPriorityFn() const {
    return m_priorFunc;
}
Patient Hospital::getNextPatient() {
   //NEED IMPLEMENTATION

   //EXTRACTS ROOT AND THROW out_of_range IF QUEUE IS EMPTY

}
void Hospital::setPriorityFn(prifn_t priFn, HEAPTYPE heapType) {
   m_priorFunc = priFn;
   m_heapType = heapType;     
   
    //NEED IMPLEMENTATION!!!!

    //MUST REBUILD HEAP USING NODES IN CURRENT STRUCTURE
    //DONT RECREATE NODES
    //NO NEED TO CHECK ARGS FOR COMPATABILITY (USER RESPONSIBLE)
}
void Hospital::setStructure(STRUCTURE structure){
    m_structure = structure;
    
    //NEED IMPLEMENTATION

    //MUST REBUILD HEAP LIKE setPriorityFn()
}
HEAPTYPE Hospital::getHeapType() const {
    return m_heapType;  
}
STRUCTURE Hospital::getStructure() const {
    return m_structure;
}
void Hospital::printPatientQueue() const {
    //NEED IMPLEMENTATION

    //PRE-ORDER TRAVERSAL
    //WILL NOT NECESSARILY BE IN PRIORITY OF PATIENT (HEAP)
    //SAMPLE OUTPUT IN driver.txt
}

void Hospital::dump() const {
  if (m_size == 0) {
    cout << "Empty heap.\n" ;
  } else {
    cout << "Hospital " << m_regPrior << ": => ";
    dump(m_heap);
  }
  cout << endl;
}
void Hospital::dump(Patient *pos) const {
  if ( pos != nullptr ) {
    cout << "(";
    dump(pos->m_left);
    if (m_structure == SKEW)
        cout << m_priorFunc(*pos) << ":" << pos->m_patient;
    else
        cout << m_priorFunc(*pos) << ":" << pos->m_patient << ":" << pos->m_npl;
    dump(pos->m_right);
    cout << ")";
  }
}

ostream& operator<<(ostream& sout, const Patient& patient) {
  sout << "Patient ID: " << patient.getPatient() 
        << ", blood pressure: " << patient.getBP()
        << ", temperature: " << patient.getTemperature();
  return sout;
}

//////////////////////////////////////////////////////////////
Region::Region(int size){
    m_heap = new Hospital[size];
    m_capacity = size;
    m_size = 0;
}
Region::~Region(){
    //NEED IMPLEMENTATION
}
bool Region::addHospital(Hospital & hospital){
    //NEED IMPLEMENTATION

    //ENQUEUES, EMPTY HOSPITALS ALLOWED 

    //CHECK ABOUT EMPTY HOSPITALS, THEY ALWAYS HAVE PRIORITY ASSOCIATED?????
}

bool Region::getHospital(Hospital & hospital){
    //NEED IMPLEMENTATION

    //DEQUEUES WITH HIGHEST PRIORITY
    //RETURNS T/F HOSPITAL IS RETURNED BY PARAMETER
}

bool Region::getNthHospital(Hospital & hospital, int n){    
    //NEED IMPLEMENTATION

    //DEQUEUES Nth PRIORITY HOSPITAL, QUEUE MUST BE IN CORRECT STATE
}
void Region::dump(){
    dump(ROOTINDEX);
    cout << endl;
}
void Region::dump(int index){
  if (index <= m_size){
    cout << "(";
    dump(index*2);
    cout << m_heap[index].m_regPrior;
    dump(index*2 + 1);
    cout << ")";
  }
}
bool Region::setPriorityFn(prifn_t priFn, HEAPTYPE heapType, int n){
    //NEED IMPLEMENTATION

    //CONVERTS THE TYPE OF HEAP IN Nth PRIORITY HOSPITAL
}

bool Region::setStructure(STRUCTURE structure, int n){
    //NEED IMPLEMENTATION

    //CONVERTS HEAP STRUCTURE OF Nth PRIORITY HOSPITAL
}
bool Region::getPatient(Patient & patient){
    //NEED IMPLEMENTATION

    //DEQUEUES PATEINT W HIGHES PRIO FROM HIGHEST PRIO HOSPITAL
    //RETURNS IN PARAMETER 
    //REMOVES AND DISCARDS EMPTY HOSPITALS THAT DO NOT HAVE PATIENTS
    //OF HIGHER PRIORITY THAN THOSE THAT DO
}