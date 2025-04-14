Felipe Oliveira Cunha 2412130016

int filho_esq(int i){
  return 2*i+1;
}
int filho_dir(int i){
  return 2*i+2;
}

void heap_max(int n,int arr[n],int i){
  int i_maior = i;
  int i_esq,i_dir,i_temp;
  while (i_maior < n){ 
    i_esq = filho_esq(i);
    i_dir = filho_dir(i);
    if (i_esq < n && arr[i_esq]>arr[i_maior]){
      i_maior = i_esq;
    }
    if (i_dir < n && arr[i_dir]>arr[i_maior]){
      i_maior = i_dir;
    }
    if (i_maior != i){
      temp = arr[i];
      arr[i]=arr[i_maior];
      arr[i_maior] = temp;
      i = i_maior;
    }else{
      break;
    }
}
