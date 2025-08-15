class motor
{
private:
    
    int ano, cadastro;
    float valor;

public:

    motor(int ano = -1, int cadastro = -1, float valor = 0.0);

    void setAno(int ano);

    int getAno();

    void setCadastro(int cadastro);

    int getCadastro();

    void setValor(float valor);
    
    float getValor();
};