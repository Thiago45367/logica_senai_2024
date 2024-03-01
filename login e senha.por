programa {
  funcao inicio() {
  // declarando variáveis.
 cadeia login, senha, loginCadastrado = "BOB", senhaCadastrada = "345"

 // solicitando dados para o usuário.
 escreva("digite o login: ")
 leia(login)

 escreva("digite a senha: ")
 leia(senha)

 // verificando usuário e senha.
 se (login == loginCadastrado e senha == senhaCadastrada){
  escreva("BEM VINDO!")
 }senao{
  escreva("acesso negado!")
 }

  }
}
