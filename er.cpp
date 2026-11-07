// CMSC 341 - Fall 2026 - Project 3
#include "er.h"
Hospital::Hospital(){ // empty object
  
}
Hospital::Hospital(prifn_t priFn, HEAPTYPE heapType, 
          STRUCTURE structure, int regPrior,
          int id)
{
    
    
}
Hospital::~Hospital()
{
  
}
void Hospital::clear() {
    
}
Hospital::Hospital(const Hospital& rhs)
{
  
}

Hospital& Hospital::operator=(const Hospital& rhs) {
  
}
void Hospital::mergeWithQueue(Hospital& rhs) {
  
}

bool Hospital::insertPatient(const Patient& patient) {
    
}

int Hospital::numPatients() const
{
  
}
prifn_t Hospital::getPriorityFn() const {
  
}
Patient Hospital::getNextPatient() {
    
}
void Hospital::setPriorityFn(prifn_t priFn, HEAPTYPE heapType) {
                      
}
void Hospital::setStructure(STRUCTURE structure){
    
}
HEAPTYPE Hospital::getHeapType() const {
  
}
STRUCTURE Hospital::getStructure() const {
  
}
void Hospital::printPatientQueue() const {
  
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
  
}
Region::~Region(){
  
}
bool Region::addHospital(Hospital & hospital){
  
}

bool Region::getHospital(Hospital & hospital){
  
}

bool Region::getNthHospital(Hospital & hospital, int n){
  
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
  
}

bool Region::setStructure(STRUCTURE structure, int n){
  
}
bool Region::getPatient(Patient & patient){
  
}