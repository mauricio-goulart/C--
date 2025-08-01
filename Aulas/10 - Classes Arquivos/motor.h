class motor
{
private:
    
    int ano, cadastro;
    float valor;

public:

    motor(int ano, int cadastro, float valor);

    void setAno(int ano);

    int getAno();

    void setCadastro(int cadastro);

    int getCadastro();

    void setValor(float valor);
    
    float getValor();