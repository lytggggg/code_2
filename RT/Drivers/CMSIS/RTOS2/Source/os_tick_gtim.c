??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * *  
   *   @ f i l e           o s _ t i c k _ g t i m . c  
   *   @ b r i e f         C M S I S   O S   T i c k   i m p l e m e n t a t i o n   f o r   G e n e r i c   T i m e r  
   *   @ v e r s i o n     V 1 . 0 . 1  
   *   @ d a t e           2 4 .   N o v e m b e r   2 0 1 7  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 1 7   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
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
 # i n c l u d e   " o s _ t i c k . h "  
 # i n c l u d e   " i r q _ c t r l . h "  
  
 # i n c l u d e   " R T E _ C o m p o n e n t s . h "  
 # i n c l u d e   C M S I S _ d e v i c e _ h e a d e r  
  
 # i f n d e f   G T I M _ I R Q _ P R I O R I T Y  
 # d e f i n e   G T I M _ I R Q _ P R I O R I T Y                       0 x F F U  
 # e n d i f  
  
 # i f n d e f   G T I M _ I R Q _ N U M  
 # d e f i n e   G T I M _ I R Q _ N U M                                 S e c u r e P h y T i m e r _ I R Q n  
 # e n d i f  
  
 / /   T i m e r   i n t e r r u p t   p e n d i n g   f l a g  
 s t a t i c   u i n t 8 _ t   G T I M _ P e n d I R Q ;  
  
 / /   T i m e r   t i c k   f r e q u e n c y  
 s t a t i c   u i n t 3 2 _ t   G T I M _ C l o c k ;  
  
 / /   T i m e r   l o a d   v a l u e  
 s t a t i c   u i n t 3 2 _ t   G T I M _ L o a d ;  
  
 / /   S e t u p   O S   T i c k .  
 i n t 3 2 _ t   O S _ T i c k _ S e t u p   ( u i n t 3 2 _ t   f r e q ,   I R Q H a n d l e r _ t   h a n d l e r )   {  
     u i n t 3 2 _ t   p r i o ,   b i t s ;  
  
     i f   ( f r e q   = =   0 U )   {  
         r e t u r n   ( - 1 ) ;  
     }  
  
     G T I M _ P e n d I R Q   =   0 U ;  
  
     / /   G e t   t i m e r   c l o c k  
 # i f d e f   S C T R _ B A S E  
     G T I M _ C l o c k   =   * ( u i n t 3 2 _ t * ) ( S C T R _ B A S E + 0 x 2 0 ) ;  
 # e l s e  
     / /   F V P   R E F C L K   C N T C o n t r o l   1 0 0 M H z  
     G T I M _ C l o c k   =   1 0 0 0 0 0 0 0 0 U L ;  
 # e n d i f  
  
     P L 1 _ S e t C o u n t e r F r e q u e n c y ( G T I M _ C l o c k ) ;  
  
     / /   C a l c u l a t e   l o a d   v a l u e  
     G T I M _ L o a d   =   ( G T I M _ C l o c k   /   f r e q )   -   1 U ;  
  
     / /   D i s a b l e   G e n e r i c   T i m e r   a n d   s e t   l o a d   v a l u e  
     P L 1 _ S e t C o n t r o l ( 0 U ) ;  
     P L 1 _ S e t L o a d V a l u e ( G T I M _ L o a d ) ;  
  
     / /   D i s a b l e   c o r r e s p o n d i n g   I R Q  
     I R Q _ D i s a b l e ( G T I M _ I R Q _ N U M ) ;  
     I R Q _ C l e a r P e n d i n g ( G T I M _ I R Q _ N U M ) ;  
  
     / /   D e t e r m i n e   n u m b e r   o f   i m p l e m e n t e d   p r i o r i t y   b i t s  
     I R Q _ S e t P r i o r i t y ( G T I M _ I R Q _ N U M ,   0 x F F U ) ;  
  
     p r i o   =   I R Q _ G e t P r i o r i t y ( G T I M _ I R Q _ N U M ) ;  
  
     / /   A t   l e a s t   b i t s   [ 7 : 4 ]   m u s t   b e   i m p l e m e n t e d  
     i f   ( ( p r i o   &   0 x F 0 U )   = =   0 U )   {  
         r e t u r n   ( - 1 ) ;  
     }  
  
     f o r   ( b i t s   =   0 ;   b i t s   <   4 ;   b i t s + + )   {  
         i f   ( ( p r i o   &   0 x 0 1 )   ! =   0 )   {  
             b r e a k ;  
         }  
         p r i o   > > =   1 ;  
     }  
      
     / /   A d j u s t   c o n f i g u r e d   p r i o r i t y   t o   t h e   n u m b e r   o f   i m p l e m e n t e d   p r i o r i t y   b i t s  
     p r i o   =   ( G T I M _ I R Q _ P R I O R I T Y   < <   b i t s )   &   0 x F F U L ;  
  
     / /   S e t   P r i v a t e   T i m e r   i n t e r r u p t   p r i o r i t y  
     I R Q _ S e t P r i o r i t y ( G T I M _ I R Q _ N U M ,   p r i o - 1 U ) ;  
  
     / /   S e t   e d g e - t r i g g e r e d   I R Q  
     I R Q _ S e t M o d e ( G T I M _ I R Q _ N U M ,   I R Q _ M O D E _ T R I G _ E D G E ) ;  
  
     / /   R e g i s t e r   t i c k   i n t e r r u p t   h a n d l e r   f u n c t i o n  
     I R Q _ S e t H a n d l e r ( G T I M _ I R Q _ N U M ,   h a n d l e r ) ;  
  
     / /   E n a b l e   c o r r e s p o n d i n g   i n t e r r u p t  
     I R Q _ E n a b l e ( G T I M _ I R Q _ N U M ) ;  
  
     / /   E n a b l e   s y s t e m   c o u n t e r   a n d   t i m e r   c o n t r o l  
 # i f d e f   S C T R _ B A S E  
     * ( u i n t 3 2 _ t * ) S C T R _ B A S E   | =   3 U ;  
 # e n d i f  
  
     / /   E n a b l e   t i m e r   c o n t r o l  
     P L 1 _ S e t C o n t r o l ( 1 U ) ;  
  
     r e t u r n   ( 0 ) ;  
 }  
  
 / / /   E n a b l e   O S   T i c k .  
 v o i d   O S _ T i c k _ E n a b l e   ( v o i d )   {  
     u i n t 3 2 _ t   c t r l ;  
  
     / /   S e t   p e n d i n g   i n t e r r u p t   i f   f l a g   s e t  
     i f   ( G T I M _ P e n d I R Q   ! =   0 U )   {  
         G T I M _ P e n d I R Q   =   0 U ;  
         I R Q _ S e t P e n d i n g   ( G T I M _ I R Q _ N U M ) ;  
     }  
  
     / /   S t a r t   t h e   P r i v a t e   T i m e r  
     c t r l   =   P L 1 _ G e t C o n t r o l ( ) ;  
     / /   S e t   b i t :   T i m e r   e n a b l e  
     c t r l   | =   1 U ;  
     P L 1 _ S e t C o n t r o l ( c t r l ) ;  
 }  
  
 / / /   D i s a b l e   O S   T i c k .  
 v o i d   O S _ T i c k _ D i s a b l e   ( v o i d )   {  
     u i n t 3 2 _ t   c t r l ;  
  
     / /   S t o p   t h e   P r i v a t e   T i m e r  
     c t r l   =   P L 1 _ G e t C o n t r o l ( ) ;  
     / /   C l e a r   b i t :   T i m e r   e n a b l e  
     c t r l   & =   ~ 1 U ;  
     P L 1 _ S e t C o n t r o l ( c t r l ) ;  
  
     / /   R e m e m b e r   p e n d i n g   i n t e r r u p t   f l a g  
     i f   ( I R Q _ G e t P e n d i n g ( G T I M _ I R Q _ N U M )   ! =   0 )   {  
         I R Q _ C l e a r P e n d i n g ( G T I M _ I R Q _ N U M ) ;  
         G T I M _ P e n d I R Q   =   1 U ;  
     }  
 }  
  
 / /   A c k n o w l e d g e   O S   T i c k   I R Q .  
 v o i d   O S _ T i c k _ A c k n o w l e d g e I R Q   ( v o i d )   {  
     I R Q _ C l e a r P e n d i n g   ( G T I M _ I R Q _ N U M ) ;  
     P L 1 _ S e t L o a d V a l u e ( G T I M _ L o a d ) ;  
 }  
  
 / /   G e t   O S   T i c k   I R Q   n u m b e r .  
 i n t 3 2 _ t     O S _ T i c k _ G e t I R Q n   ( v o i d )   {  
     r e t u r n   ( G T I M _ I R Q _ N U M ) ;  
 }  
  
 / /   G e t   O S   T i c k   c l o c k .  
 u i n t 3 2 _ t   O S _ T i c k _ G e t C l o c k   ( v o i d )   {  
     r e t u r n   ( G T I M _ C l o c k ) ;  
 }  
  
 / /   G e t   O S   T i c k   i n t e r v a l .  
 u i n t 3 2 _ t   O S _ T i c k _ G e t I n t e r v a l   ( v o i d )   {  
     r e t u r n   ( G T I M _ L o a d   +   1 U ) ;  
 }  
  
 / /   G e t   O S   T i c k   c o u n t   v a l u e .  
 u i n t 3 2 _ t   O S _ T i c k _ G e t C o u n t   ( v o i d )   {  
     r e t u r n   ( G T I M _ L o a d   -   P L 1 _ G e t C u r r e n t V a l u e ( ) ) ;  
 }  
  
 / /   G e t   O S   T i c k   o v e r f l o w   s t a t u s .  
 u i n t 3 2 _ t   O S _ T i c k _ G e t O v e r f l o w   ( v o i d )   {  
     C N T P _ C T L _ T y p e   c n t p _ c t l ;  
     c n t p _ c t l . w   =   P L 1 _ G e t C o n t r o l ( ) ;  
     r e t u r n   ( c n t p _ c t l . b . I S T A T U S ) ;  
 }  