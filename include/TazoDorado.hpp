class TazoDorado
{
private:
    bool flotando;     
public:
    TazoDorado() {
        this -> flotando = false; 
    }
    void inicializar() {
        this -> flotando = false; 
    }
    ~TazoDorado() {}
    void flotar(){
        this -> flotando = true; 
    }
    bool flotandoo()
    {
        return this->flotando;
    }
};