programa {
  funcao inicio() {
  // declarando vari�veis.
 cadeia login, senha, loginCadastrado = "BOB", senhaCadastrada = "345"

 // solicitando dados para o usu�rio.
 escreva("digite o login: ")
 leia(login)

 escreva("digite a senha: ")
 leia(senha)

 // verificando usu�rio e senha.
 se (login == loginCadastrado e senha == senhaCadastrada){
  escreva("BEM VINDO!")
 }senao{
  escreva("acesso negado!")
 }

  }
}
