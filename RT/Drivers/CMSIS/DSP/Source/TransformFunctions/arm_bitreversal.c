�?/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ b i t r e v e r s a l . c  
   *   D e s c r i p t i o n :     B i t r e v e r s a l   f u n c t i o n s  
   *  
   *   $ D a t e :                 2 7 .   J a n u a r y   2 0 1 7  
   *   $ R e v i s i o n :         V . 1 . 5 . 1  
   *  
   *   T a r g e t   P r o c e s s o r :   C o r t e x - M   c o r e s  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 / *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 7   A R M   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   * /  
  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " a r m _ c o m m o n _ t a b l e s . h "  
  
 / *  
 *   @ b r i e f     I n - p l a c e   b i t   r e v e r s a l   f u n c t i o n .  
 *   @ p a r a m [ i n ,   o u t ]   * p S r c                 p o i n t s   t o   t h e   i n - p l a c e   b u f f e r   o f   f l o a t i n g - p o i n t   d a t a   t y p e .  
 *   @ p a r a m [ i n ]             f f t S i z e             l e n g t h   o f   t h e   F F T .  
 *   @ p a r a m [ i n ]             b i t R e v F a c t o r   b i t   r e v e r s a l   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   b i t   r e v e r s a l   t a b l e .  
 *   @ p a r a m [ i n ]             * p B i t R e v T a b     p o i n t s   t o   t h e   b i t   r e v e r s a l   t a b l e .  
 *   @ r e t u r n   n o n e .  
 * /  
  
 v o i d   a r m _ b i t r e v e r s a l _ f 3 2 (  
 f l o a t 3 2 _ t   *   p S r c ,  
 u i n t 1 6 _ t   f f t S i z e ,  
 u i n t 1 6 _ t   b i t R e v F a c t o r ,  
 u i n t 1 6 _ t   *   p B i t R e v T a b )  
 {  
       u i n t 1 6 _ t   f f t L e n B y 2 ,   f f t L e n B y 2 p 1 ;  
       u i n t 1 6 _ t   i ,   j ;  
       f l o a t 3 2 _ t   i n ;  
  
       / *     I n i t i a l i z a t i o n s   * /  
       j   =   0 U ;  
       f f t L e n B y 2   =   f f t S i z e   > >   1 U ;  
       f f t L e n B y 2 p 1   =   ( f f t S i z e   > >   1 U )   +   1 U ;  
  
       / *   B i t   R e v e r s a l   I m p l e m e n t a t i o n   * /  
       f o r   ( i   =   0 U ;   i   < =   ( f f t L e n B y 2   -   2 U ) ;   i   + =   2 U )  
       {  
             i f   ( i   <   j )  
             {  
                   / *     p S r c [ i ]   < - >   p S r c [ j ] ;   * /  
                   i n   =   p S r c [ 2 U   *   i ] ;  
                   p S r c [ 2 U   *   i ]   =   p S r c [ 2 U   *   j ] ;  
                   p S r c [ 2 U   *   j ]   =   i n ;  
  
                   / *     p S r c [ i + 1 U ]   < - >   p S r c [ j + 1 U ]   * /  
                   i n   =   p S r c [ ( 2 U   *   i )   +   1 U ] ;  
                   p S r c [ ( 2 U   *   i )   +   1 U ]   =   p S r c [ ( 2 U   *   j )   +   1 U ] ;  
                   p S r c [ ( 2 U   *   j )   +   1 U ]   =   i n ;  
  
                   / *     p S r c [ i + f f t L e n B y 2 p 1 ]   < - >   p S r c [ j + f f t L e n B y 2 p 1 ]   * /  
                   i n   =   p S r c [ 2 U   *   ( i   +   f f t L e n B y 2 p 1 ) ] ;  
                   p S r c [ 2 U   *   ( i   +   f f t L e n B y 2 p 1 ) ]   =   p S r c [ 2 U   *   ( j   +   f f t L e n B y 2 p 1 ) ] ;  
                   p S r c [ 2 U   *   ( j   +   f f t L e n B y 2 p 1 ) ]   =   i n ;  
  
                   / *     p S r c [ i + f f t L e n B y 2 p 1 + 1 U ]   < - >   p S r c [ j + f f t L e n B y 2 p 1 + 1 U ]   * /  
                   i n   =   p S r c [ ( 2 U   *   ( i   +   f f t L e n B y 2 p 1 ) )   +   1 U ] ;  
                   p S r c [ ( 2 U   *   ( i   +   f f t L e n B y 2 p 1 ) )   +   1 U ]   =  
                   p S r c [ ( 2 U   *   ( j   +   f f t L e n B y 2 p 1 ) )   +   1 U ] ;  
                   p S r c [ ( 2 U   *   ( j   +   f f t L e n B y 2 p 1 ) )   +   1 U ]   =   i n ;  
  
             }  
  
             / *     p S r c [ i + 1 U ]   < - >   p S r c [ j + 1 U ]   * /  
             i n   =   p S r c [ 2 U   *   ( i   +   1 U ) ] ;  
             p S r c [ 2 U   *   ( i   +   1 U ) ]   =   p S r c [ 2 U   *   ( j   +   f f t L e n B y 2 ) ] ;  
             p S r c [ 2 U   *   ( j   +   f f t L e n B y 2 ) ]   =   i n ;  
  
             / *     p S r c [ i + 2 U ]   < - >   p S r c [ j + 2 U ]   * /  
             i n   =   p S r c [ ( 2 U   *   ( i   +   1 U ) )   +   1 U ] ;  
             p S r c [ ( 2 U   *   ( i   +   1 U ) )   +   1 U ]   =   p S r c [ ( 2 U   *   ( j   +   f f t L e n B y 2 ) )   +   1 U ] ;  
             p S r c [ ( 2 U   *   ( j   +   f f t L e n B y 2 ) )   +   1 U ]   =   i n ;  
  
             / *     R e a d i n g   t h e   i n d e x   f o r   t h e   b i t   r e v e r s a l   * /  
             j   =   * p B i t R e v T a b ;  
  
             / *     U p d a t i n g   t h e   b i t   r e v e r s a l   i n d e x   d e p e n d i n g   o n   t h e   f f t   l e n g t h     * /  
             p B i t R e v T a b   + =   b i t R e v F a c t o r ;  
       }  
 }  
  
  
  
 / *  
 *   @ b r i e f     I n - p l a c e   b i t   r e v e r s a l   f u n c t i o n .  
 *   @ p a r a m [ i n ,   o u t ]   * p S r c                 p o i n t s   t o   t h e   i n - p l a c e   b u f f e r   o f   Q 3 1   d a t a   t y p e .  
 *   @ p a r a m [ i n ]             f f t L e n               l e n g t h   o f   t h e   F F T .  
 *   @ p a r a m [ i n ]             b i t R e v F a c t o r   b i t   r e v e r s a l   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   b i t   r e v e r s a l   t a b l e  
 *   @ p a r a m [ i n ]             * p B i t R e v T a b     p o i n t s   t o   b i t   r e v e r s a l   t a b l e .  
 *   @ r e t u r n   n o n e .  
 * /  
  
 v o i d   a r m _ b i t r e v e r s a l _ q 3 1 (  
 q 3 1 _ t   *   p S r c ,  
 u i n t 3 2 _ t   f f t L e n ,  
 u i n t 1 6 _ t   b i t R e v F a c t o r ,  
 u i n t 1 6 _ t   *   p B i t R e v T a b l e )  
 {  
       u i n t 3 2 _ t   f f t L e n B y 2 ,   f f t L e n B y 2 p 1 ,   i ,   j ;  
       q 3 1 _ t   i n ;  
  
       / *     I n i t i a l i z a t i o n s             * /  
       j   =   0 U ;  
       f f t L e n B y 2   =   f f t L e n   /   2 U ;  
       f f t L e n B y 2 p 1   =   ( f f t L e n   /   2 U )   +   1 U ;  
  
       / *   B i t   R e v e r s a l   I m p l e m e n t a t i o n   * /  
       f o r   ( i   =   0 U ;   i   < =   ( f f t L e n B y 2   -   2 U ) ;   i   + =   2 U )  
       {  
             i f   ( i   <   j )  
             {  
                   / *     p S r c [ i ]   < - >   p S r c [ j ] ;   * /  
                   i n   =   p S r c [ 2 U   *   i ] ;  
                   p S r c [ 2 U   *   i ]   =   p S r c [ 2 U   *   j ] ;  
                   p S r c [ 2 U   *   j ]   =   i n ;  
  
                   / *     p S r c [ i + 1 U ]   < - >   p S r c [ j + 1 U ]   * /  
                   i n   =   p S r c [ ( 2 U   *   i )   +   1 U ] ;  
                   p S r c [ ( 2 U   *   i )   +   1 U ]   =   p S r c [ ( 2 U   *   j )   +   1 U ] ;  
                   p S r c [ ( 2 U   *   j )   +   1 U ]   =   i n ;  
  
                   / *     p S r c [ i + f f t L e n B y 2 p 1 ]   < - >   p S r c [ j + f f t L e n B y 2 p 1 ]   * /  
                   i n   =   p S r c [ 2 U   *   ( i   +   f f t L e n B y 2 p 1 ) ] ;  
                   p S r c [ 2 U   *   ( i   +   f f t L e n B y 2 p 1 ) ]   =   p S r c [ 2 U   *   ( j   +   f f t L e n B y 2 p 1 ) ] ;  
                   p S r c [ 2 U   *   ( j   +   f f t L e n B y 2 p 1 ) ]   =   i n ;  
  
                   / *     p S r c [ i + f f t L e n B y 2 p 1 + 1 U ]   < - >   p S r c [ j + f f t L e n B y 2 p 1 + 1 U ]   * /  
                   i n   =   p S r c [ ( 2 U   *   ( i   +   f f t L e n B y 2 p 1 ) )   +   1 U ] ;  
                   p S r c [ ( 2 U   *   ( i   +   f f t L e n B y 2 p 1 ) )   +   1 U ]   =  
                   p S r c [ ( 2 U   *   ( j   +   f f t L e n B y 2 p 1 ) )   +   1 U ] ;  
                   p S r c [ ( 2 U   *   ( j   +   f f t L e n B y 2 p 1 ) )   +   1 U ]   =   i n ;  
  
             }  
  
             / *     p S r c [ i + 1 U ]   < - >   p S r c [ j + 1 U ]   * /  
             i n   =   p S r c [ 2 U   *   ( i   +   1 U ) ] ;  
             p S r c [ 2 U   *   ( i   +   1 U ) ]   =   p S r c [ 2 U   *   ( j   +   f f t L e n B y 2 ) ] ;  
             p S r c [ 2 U   *   ( j   +   f f t L e n B y 2 ) ]   =   i n ;  
  
             / *     p S r c [ i + 2 U ]   < - >   p S r c [ j + 2 U ]   * /  
             i n   =   p S r c [ ( 2 U   *   ( i   +   1 U ) )   +   1 U ] ;  
             p S r c [ ( 2 U   *   ( i   +   1 U ) )   +   1 U ]   =   p S r c [ ( 2 U   *   ( j   +   f f t L e n B y 2 ) )   +   1 U ] ;  
             p S r c [ ( 2 U   *   ( j   +   f f t L e n B y 2 ) )   +   1 U ]   =   i n ;  
  
             / *     R e a d i n g   t h e   i n d e x   f o r   t h e   b i t   r e v e r s a l   * /  
             j   =   * p B i t R e v T a b l e ;  
  
             / *     U p d a t i n g   t h e   b i t   r e v e r s a l   i n d e x   d e p e n d i n g   o n   t h e   f f t   l e n g t h   * /  
             p B i t R e v T a b l e   + =   b i t R e v F a c t o r ;  
       }  
 }  
  
  
  
 / *  
       *   @ b r i e f     I n - p l a c e   b i t   r e v e r s a l   f u n c t i o n .  
       *   @ p a r a m [ i n ,   o u t ]   * p S r c                 p o i n t s   t o   t h e   i n - p l a c e   b u f f e r   o f   Q 1 5   d a t a   t y p e .  
       *   @ p a r a m [ i n ]             f f t L e n               l e n g t h   o f   t h e   F F T .  
       *   @ p a r a m [ i n ]             b i t R e v F a c t o r   b i t   r e v e r s a l   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   b i t   r e v e r s a l   t a b l e  
       *   @ p a r a m [ i n ]             * p B i t R e v T a b     p o i n t s   t o   b i t   r e v e r s a l   t a b l e .  
       *   @ r e t u r n   n o n e .  
 * /  
  
 v o i d   a r m _ b i t r e v e r s a l _ q 1 5 (  
 q 1 5 _ t   *   p S r c 1 6 ,  
 u i n t 3 2 _ t   f f t L e n ,  
 u i n t 1 6 _ t   b i t R e v F a c t o r ,  
 u i n t 1 6 _ t   *   p B i t R e v T a b )  
 {  
       q 3 1 _ t   * p S r c   =   ( q 3 1 _ t   * )   p S r c 1 6 ;  
       q 3 1 _ t   i n ;  
       u i n t 3 2 _ t   f f t L e n B y 2 ,   f f t L e n B y 2 p 1 ;  
       u i n t 3 2 _ t   i ,   j ;  
  
       / *     I n i t i a l i z a t i o n s   * /  
       j   =   0 U ;  
       f f t L e n B y 2   =   f f t L e n   /   2 U ;  
       f f t L e n B y 2 p 1   =   ( f f t L e n   /   2 U )   +   1 U ;  
  
       / *   B i t   R e v e r s a l   I m p l e m e n t a t i o n   * /  
       f o r   ( i   =   0 U ;   i   < =   ( f f t L e n B y 2   -   2 U ) ;   i   + =   2 U )  
       {  
             i f   ( i   <   j )  
             {  
                   / *     p S r c [ i ]   < - >   p S r c [ j ] ;   * /  
                   / *     p S r c [ i + 1 U ]   < - >   p S r c [ j + 1 U ]   * /  
                   i n   =   p S r c [ i ] ;  
                   p S r c [ i ]   =   p S r c [ j ] ;  
                   p S r c [ j ]   =   i n ;  
  
                   / *     p S r c [ i   +   f f t L e n B y 2 p 1 ]   < - >   p S r c [ j   +   f f t L e n B y 2 p 1 ] ;     * /  
                   / *     p S r c [ i   +   f f t L e n B y 2 p 1 + 1 U ]   < - >   p S r c [ j   +   f f t L e n B y 2 p 1 + 1 U ]   * /  
                   i n   =   p S r c [ i   +   f f t L e n B y 2 p 1 ] ;  
                   p S r c [ i   +   f f t L e n B y 2 p 1 ]   =   p S r c [ j   +   f f t L e n B y 2 p 1 ] ;  
                   p S r c [ j   +   f f t L e n B y 2 p 1 ]   =   i n ;  
             }  
  
             / *     p S r c [ i + 1 U ]   < - >   p S r c [ j + f f t L e n B y 2 ] ;                   * /  
             / *     p S r c [ i + 2 ]   < - >   p S r c [ j + f f t L e n B y 2 + 1 U ]     * /  
             i n   =   p S r c [ i   +   1 U ] ;  
             p S r c [ i   +   1 U ]   =   p S r c [ j   +   f f t L e n B y 2 ] ;  
             p S r c [ j   +   f f t L e n B y 2 ]   =   i n ;  
  
             / *     R e a d i n g   t h e   i n d e x   f o r   t h e   b i t   r e v e r s a l   * /  
             j   =   * p B i t R e v T a b ;  
  
             / *     U p d a t i n g   t h e   b i t   r e v e r s a l   i n d e x   d e p e n d i n g   o n   t h e   f f t   l e n g t h     * /  
             p B i t R e v T a b   + =   b i t R e v F a c t o r ;  
       }  
 }  