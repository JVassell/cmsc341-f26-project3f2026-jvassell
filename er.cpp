// CMSC 341 - Fall 2026 - Project 3
#include "er.h"
Hospital::Hospital(){ // empty object
  
}
Hospital::Hospital(prifn_t priFn, HEAPTYPE heapType, 
          STRUCTURE structure, int regPrior,
          int id)
{
    //NEED IMPLEMENTATION
    
}
Hospital::~Hospital()
{
  //NEED IMPLEMENTATION
}
void Hospital::clear() {
    //NEED IMPLEMENTATION
}
Hospital::Hospital(const Hospital& rhs)
{
  //NEED IMPLEMENTATION
}

Hospital& Hospital::operator=(const Hospital& rhs) {
    //NEED IMPLEMENTATION
}
void Hospital::mergeWithQueue(Hospital& rhs) {
    //NEED IMPLEMENTATION
}

bool Hospital::insertPatient(const Patient& patient) {
    //NEED IMPLEMENTATION
}

int Hospital::numPatients() const
{
    //NEED IMPLEMENTATION
}
prifn_t Hospital::getPriorityFn() const {
    //NEED IMPLEMENTATION
}
Patient Hospital::getNextPatient() {
    //NEED IMPLEMENTATION
}
void Hospital::setPriorityFn(prifn_t priFn, HEAPTYPE heapType) {
   //NEED IMPLEMENTATION               
}
void Hospital::setStructure(STRUCTURE structure){
    m_structure = structure;   
}
HEAPTYPE Hospital::getHeapType() const {
    return m_heapType;  
}
STRUCTURE Hospital::getStructure() const {
    return m_structure;
}
void Hospital::printPatientQueue() const {
    //NEED IMPLEMENTATION
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
    //NEED IMPLEMENTATION
}
Region::~Region(){
    //NEED IMPLEMENTATION
}
bool Region::addHospital(Hospital & hospital){
    //NEED IMPLEMENTATION
}

bool Region::getHospital(Hospital & hospital){
    //NEED IMPLEMENTATION
}

bool Region::getNthHospital(Hospital & hospital, int n){    
    //NEED IMPLEMENTATION
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
}

bool Region::setStructure(STRUCTURE structure, int n){
    //NEED IMPLEMENTATION
}
bool Region::getPatient(Patient & patient){
    //NEED IMPLEMENTATION
}