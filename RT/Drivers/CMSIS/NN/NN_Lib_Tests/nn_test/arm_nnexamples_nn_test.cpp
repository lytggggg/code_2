??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
 *  
 *  
 *   P r o j e c t :               C M S I S   N N   L i b r a r y  
 *   T i t l e :                   a r m _ n n e x a m p l e s _ n n _ t e s t . c p p  
 *  
 *   D e s c r i p t i o n :       E x a m p l e   c o d e   f o r   N N   k e r n e l   t e s t i n g .  
 *  
 *   T a r g e t   P r o c e s s o r :   C o r t e x - M   c o r e s  
 *  
 *   R e d i s t r i b u t i o n   a n d   u s e   i n   s o u r c e   a n d   b i n a r y   f o r m s ,   w i t h   o r   w i t h o u t  
 *   m o d i f i c a t i o n ,   a r e   p e r m i t t e d   p r o v i d e d   t h a t   t h e   f o l l o w i n g   c o n d i t i o n s  
 *   a r e   m e t :  
 *       -   R e d i s t r i b u t i o n s   o f   s o u r c e   c o d e   m u s t   r e t a i n   t h e   a b o v e   c o p y r i g h t  
 *           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r .  
 *       -   R e d i s t r i b u t i o n s   i n   b i n a r y   f o r m   m u s t   r e p r o d u c e   t h e   a b o v e   c o p y r i g h t  
 *           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r   i n  
 *           t h e   d o c u m e n t a t i o n   a n d / o r   o t h e r   m a t e r i a l s   p r o v i d e d   w i t h   t h e  
 *           d i s t r i b u t i o n .  
 *       -   N e i t h e r   t h e   n a m e   o f   A R M   L I M I T E D   n o r   t h e   n a m e s   o f   i t s   c o n t r i b u t o r s  
 *           m a y   b e   u s e d   t o   e n d o r s e   o r   p r o m o t e   p r o d u c t s   d e r i v e d   f r o m   t h i s  
 *           s o f t w a r e   w i t h o u t   s p e c i f i c   p r i o r   w r i t t e n   p e r m i s s i o n .  
 *  
 *   T H I S   S O F T W A R E   I S   P R O V I D E D   B Y   T H E   C O P Y R I G H T   H O L D E R S   A N D   C O N T R I B U T O R S  
 *   " A S   I S "   A N D   A N Y   E X P R E S S   O R   I M P L I E D   W A R R A N T I E S ,   I N C L U D I N G ,   B U T   N O T  
 *   L I M I T E D   T O ,   T H E   I M P L I E D   W A R R A N T I E S   O F   M E R C H A N T A B I L I T Y   A N D   F I T N E S S  
 *   F O R   A   P A R T I C U L A R   P U R P O S E   A R E   D I S C L A I M E D .   I N   N O   E V E N T   S H A L L   T H E  
 *   C O P Y R I G H T   O W N E R   O R   C O N T R I B U T O R S   B E   L I A B L E   F O R   A N Y   D I R E C T ,   I N D I R E C T ,  
 *   I N C I D E N T A L ,   S P E C I A L ,   E X E M P L A R Y ,   O R   C O N S E Q U E N T I A L   D A M A G E S   ( I N C L U D I N G ,  
 *   B U T   N O T   L I M I T E D   T O ,   P R O C U R E M E N T   O F   S U B S T I T U T E   G O O D S   O R   S E R V I C E S ;  
 *   L O S S   O F   U S E ,   D A T A ,   O R   P R O F I T S ;   O R   B U S I N E S S   I N T E R R U P T I O N )   H O W E V E R  
 *   C A U S E D   A N D   O N   A N Y   T H E O R Y   O F   L I A B I L I T Y ,   W H E T H E R   I N   C O N T R A C T ,   S T R I C T  
 *   L I A B I L I T Y ,   O R   T O R T   ( I N C L U D I N G   N E G L I G E N C E   O R   O T H E R W I S E )   A R I S I N G   I N  
 *   A N Y   W A Y   O U T   O F   T H E   U S E   O F   T H I S   S O F T W A R E ,   E V E N   I F   A D V I S E D   O F   T H E  
 *   P O S S I B I L I T Y   O F   S U C H   D A M A G E .  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 # i n c l u d e   " a r m _ n n e x a m p l e s _ n n _ t e s t . h "  
  
 / / # d e f i n e   T E S T _ S I G M O I D  
 / / # d e f i n e   T E S T _ T A N H  
 # d e f i n e   T E S T _ P O O L  
 # d e f i n e   T E S T _ R E L U  
 # d e f i n e   T E S T _ I P  
 # d e f i n e   T E S T _ C O N V  
 # d e f i n e   T E S T _ N O N S Q U A R E  
 # d e f i n e   T E S T _ N N M U L T  
  
 i n t   t e s t _ i n d e x   =   0 ;  
 q 7 _ t   t e s t _ f l a g s [ 5 0 ] ;  
 b o o l   t e s t _ p a s s ;  
  
 i n t   m a i n ( )  
 {  
         p r i n t f ( " s t a r t   t e s t s \ n " ) ;  
  
         s r a n d ( 1 ) ;  
  
         / /   c o m m o n   p o i n t e r s   f o r   t e s t i n g   d a t a  
         q 7 _ t           * t e s t 1 ;  
         q 1 5 _ t         * t e s t 2 ;  
         q 7 _ t           * t e s t 3 ;  
         q 1 5 _ t         * t e s t 4 ;  
  
         f o r   ( t e s t _ i n d e x   =   0 ;   t e s t _ i n d e x < 5 0 ;   t e s t _ i n d e x + + )   {  
                 t e s t _ f l a g s [ t e s t _ i n d e x ]   =   - 1 ;  
         }  
         t e s t _ i n d e x   =   0 ;  
  
 # i f d e f   T E S T _ N N M U L T  
 # d e f i n e   N N M U L T _ D I M   1 2 8  
         t e s t 1   =   n e w   q 7 _ t [ N N M U L T _ D I M * 2 ] ;  
         t e s t 2   =   n e w   q 1 5 _ t [ N N M U L T _ D I M * 2 ] ;  
         t e s t 3   =   n e w   q 7 _ t [ N N M U L T _ D I M * 2 ] ;  
         t e s t 4   =   n e w   q 1 5 _ t [ N N M U L T _ D I M * 2 ] ;  
  
         q 7 _ t   *   m u l t _ o u t _ q 7   =   t e s t 3 ;  
         q 7 _ t   *   m u l t _ r e f _ q 7   =   t e s t 3   +   N N M U L T _ D I M ;  
         q 1 5 _ t   *   m u l t _ o u t _ q 1 5   =   t e s t 4 ;  
         q 1 5 _ t   *   m u l t _ r e f _ q 1 5   =   t e s t 4   +   N N M U L T _ D I M ;  
  
         f o r   ( i n t   i = 0 ; i < N N M U L T _ D I M * 2 ; i + + )   {  
                 t e s t 1 [ i ]   =   ( r a n d ( )   %   2 5 6   -   1 2 8 ) ;  
                 t e s t 2 [ i ]   =   ( r a n d ( )   %   6 5 5 3 6   -   3 2 7 6 8 ) ;  
         }  
  
         / /   T e s t   q 7  
         a r m _ n n _ m u l t _ q 7 ( t e s t 1 ,   t e s t 1 + N N M U L T _ D I M ,   m u l t _ o u t _ q 7 ,   5 ,   N N M U L T _ D I M ) ;  
  
         a r m _ n n _ m u l t _ q 7 _ r e f ( t e s t 1 ,   t e s t 1 + N N M U L T _ D I M ,   m u l t _ r e f _ q 7 ,   5 ,   N N M U L T _ D I M ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( m u l t _ o u t _ q 7 ,   m u l t _ r e f _ q 7 ,   N N M U L T _ D I M ) ;  
  
         a r m _ n n _ m u l t _ q 7 ( t e s t 1 ,   t e s t 1 + N N M U L T _ D I M ,   m u l t _ o u t _ q 7 ,   9 ,   N N M U L T _ D I M ) ;  
  
         a r m _ n n _ m u l t _ q 7 _ r e f ( t e s t 1 ,   t e s t 1 + N N M U L T _ D I M ,   m u l t _ r e f _ q 7 ,   9 ,   N N M U L T _ D I M ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( m u l t _ o u t _ q 7 ,   m u l t _ r e f _ q 7 ,   N N M U L T _ D I M ) ;  
  
         / /   T e s t   q 1 5  
         a r m _ n n _ m u l t _ q 1 5 ( t e s t 2 ,   t e s t 2 + N N M U L T _ D I M ,   m u l t _ o u t _ q 1 5 ,   1 3 ,   N N M U L T _ D I M ) ;  
  
         a r m _ n n _ m u l t _ q 1 5 _ r e f ( t e s t 2 ,   t e s t 2 + N N M U L T _ D I M ,   m u l t _ r e f _ q 1 5 ,   1 3 ,   N N M U L T _ D I M ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( m u l t _ o u t _ q 1 5 ,   m u l t _ r e f _ q 1 5 ,   N N M U L T _ D I M ) ;  
  
         a r m _ n n _ m u l t _ q 1 5 ( t e s t 2 ,   t e s t 2 + N N M U L T _ D I M ,   m u l t _ o u t _ q 1 5 ,   1 8 ,   N N M U L T _ D I M ) ;  
  
         a r m _ n n _ m u l t _ q 1 5 _ r e f ( t e s t 2 ,   t e s t 2 + N N M U L T _ D I M ,   m u l t _ r e f _ q 1 5 ,   1 8 ,   N N M U L T _ D I M ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( m u l t _ o u t _ q 1 5 ,   m u l t _ r e f _ q 1 5 ,   N N M U L T _ D I M ) ;  
  
 # e n d i f  
  
 # i f d e f   T E S T _ S I G M O I D  
  
 # d e f i n e   S I G M O I D _ D I M   1 2 8  
  
         / *   T h i s   p a r t   t e s t s   t h e   r u n n i n g   o f   s i g m o i d   f u n c t i o n s   * /  
  
         t e s t 1   =   n e w   q 7 _ t [ S I G M O I D _ D I M ] ;  
         t e s t 2   =   n e w   q 1 5 _ t [ S I G M O I D _ D I M ] ;  
         t e s t 3   =   n e w   q 7 _ t [ S I G M O I D _ D I M ] ;  
         t e s t 4   =   n e w   q 1 5 _ t [ S I G M O I D _ D I M ] ;  
  
         s r a n d ( 1 ) ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   S I G M O I D _ D I M ;   i + + )  
         {  
                 t e s t 1 [ i ]   =   ( r a n d ( )   %   2 5 6   -   1 2 8 ) ;  
                 t e s t 2 [ i ]   =   ( r a n d ( )   %   6 5 5 3 6   -   3 2 7 6 8 ) ;  
                 t e s t 3 [ i ]   =   t e s t 1 [ i ] ;  
                 t e s t 4 [ i ]   =   t e s t 2 [ i ] ;  
         }  
  
         a r m _ n n _ a c t i v a t i o n s _ d i r e c t _ q 7 ( t e s t 3 ,   S I G M O I D _ D I M ,   3 ,   A R M _ S I G M O I D ) ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   S I G M O I D _ D I M ;   i + + )  
         {  
                 p r i n t f ( " i n :   % d     o u t :   % d \ n " ,   t e s t 1 [ i ] ,   t e s t 3 [ i ] ) ;  
         }  
  
         p r i n t f ( " s t a r t   t e s t i n g   q 1 5 _ t   s i g m o i d \ n \ n " ) ;  
  
         a r m _ n n _ a c t i v a t i o n s _ d i r e c t _ q 1 5 ( t e s t 4 ,   S I G M O I D _ D I M ,   3 ,   A R M _ S I G M O I D ) ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   S I G M O I D _ D I M ;   i + + )  
         {  
                 p r i n t f ( " i n :   % d     o u t :   % d \ n " ,   t e s t 2 [ i ] ,   t e s t 4 [ i ] ) ;  
         }  
  
         d e l e t e [ ] t e s t 1 ;  
         d e l e t e [ ] t e s t 2 ;  
         d e l e t e [ ] t e s t 3 ;  
         d e l e t e [ ] t e s t 4 ;  
  
 # e n d i f  
  
 # i f d e f   T E S T _ T A N H  
  
 # d e f i n e   T A N H _ D I M   1 2 8  
  
         / *   T h i s   p a r t   t e s t s   t h e   r u n n i n g   o f   s i g m o i d   f u n c t i o n s   * /  
  
         t e s t 1   =   n e w   q 7 _ t [ T A N H _ D I M ] ;  
         t e s t 2   =   n e w   q 1 5 _ t [ T A N H _ D I M ] ;  
         t e s t 3   =   n e w   q 7 _ t [ T A N H _ D I M ] ;  
         t e s t 4   =   n e w   q 1 5 _ t [ T A N H _ D I M ] ;  
  
         s r a n d ( 1 ) ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   T A N H _ D I M ;   i + + )  
         {  
                 t e s t 1 [ i ]   =   ( r a n d ( )   %   2 5 6   -   1 2 8 ) ;  
                 t e s t 2 [ i ]   =   ( r a n d ( )   %   6 5 5 3 6   -   3 2 7 6 8 ) ;  
                 t e s t 3 [ i ]   =   t e s t 1 [ i ] ;  
                 t e s t 4 [ i ]   =   t e s t 2 [ i ] ;  
         }  
  
         a r m _ n n _ a c t i v a t i o n s _ d i r e c t _ q 7 ( t e s t 3 ,   T A N H _ D I M ,   3 ,   A R M _ T A N H ) ;  
  
         p r i n t f ( " s t a r t   t e s t i n g   q 7 _ t   t a n h \ n \ n " ) ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   T A N H _ D I M ;   i + + )  
         {  
                 p r i n t f ( " i n :   % d     o u t :   % d \ n " ,   t e s t 1 [ i ] ,   t e s t 3 [ i ] ) ;  
         }  
  
         p r i n t f ( " s t a r t   t e s t i n g   q 1 5 _ t   t a n h \ n \ n " ) ;  
  
         a r m _ n n _ a c t i v a t i o n s _ d i r e c t _ q 1 5 ( t e s t 4 ,   T A N H _ D I M ,   3 ,   A R M _ T A N H ) ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   T A N H _ D I M ;   i + + )  
         {  
                 p r i n t f ( " i n :   % d     o u t :   % d \ n " ,   t e s t 2 [ i ] ,   t e s t 4 [ i ] ) ;  
         }  
  
         d e l e t e [ ] t e s t 1 ;  
         d e l e t e [ ] t e s t 2 ;  
         d e l e t e [ ] t e s t 3 ;  
         d e l e t e [ ] t e s t 4 ;  
  
 # e n d i f  
  
 # i f d e f   T E S T _ P O O L  
  
 # d e f i n e   P O O L _ I M _ D I M   3 2  
 # d e f i n e   P O O L _ I M _ C H   8  
  
         t e s t 1   =   n e w   q 7 _ t [ P O O L _ I M _ D I M   *   P O O L _ I M _ D I M   *   P O O L _ I M _ C H   *   2 ] ;  
         t e s t 2   =   n e w   q 1 5 _ t [ P O O L _ I M _ D I M   *   P O O L _ I M _ C H ] ;  
         t e s t 3   =   n e w   q 7 _ t [ P O O L _ I M _ D I M   *   P O O L _ I M _ D I M   *   P O O L _ I M _ C H ] ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   P O O L _ I M _ D I M   *   P O O L _ I M _ D I M   *   P O O L _ I M _ C H ;   i + + )  
         {  
                 t e s t 1 [ i ]   =   ( r a n d ( )   %   2 5 6   -   1 2 8 ) ;  
         }  
  
         q 7 _ t           * i m g _ i n   =   t e s t 1   +   P O O L _ I M _ D I M   *   P O O L _ I M _ D I M   *   P O O L _ I M _ C H ;  
         q 7 _ t           * p o o l _ o u t _ r e f   =   t e s t 3 ;  
         q 7 _ t           * p o o l _ o u t _ o p t   =   t e s t 3   +   P O O L _ I M _ D I M   *   P O O L _ I M _ D I M   *   P O O L _ I M _ C H   /   2 ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   P O O L _ I M _ D I M   *   P O O L _ I M _ D I M   *   P O O L _ I M _ C H ;   i + + )  
         {  
                 t e s t 3 [ i ]   =   0 ;  
         }  
  
         / /   c o p y   o v e r   t h e   i m g   i n p u t  
         f o r   ( i n t   i   =   0 ;   i   <   P O O L _ I M _ D I M   *   P O O L _ I M _ D I M   *   P O O L _ I M _ C H ;   i + + )  
         {  
                 i m g _ i n [ i ]   =   t e s t 1 [ i ] ;  
         }  
  
         i n i t i a l i z e _ r e s u l t s _ q 7 ( p o o l _ o u t _ r e f ,   p o o l _ o u t _ o p t ,   P O O L _ I M _ D I M   /   2   *   P O O L _ I M _ D I M   /   2   *   P O O L _ I M _ C H ) ;  
  
         p r i n t f ( " S t a r t   m a x p o o l   r e f e r e n c e   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ m a x p o o l _ q 7 _ H W C _ r e f ( i m g _ i n ,   P O O L _ I M _ D I M ,   P O O L _ I M _ C H ,   3 ,   0 ,   2 ,   P O O L _ I M _ D I M   /   2 ,   ( q 7 _ t   * )   t e s t 2 ,   p o o l _ o u t _ r e f ) ;  
  
         / /   c o p y   o v e r   t h e   i m g   i n p u t  
         f o r   ( i n t   i   =   0 ;   i   <   P O O L _ I M _ D I M   *   P O O L _ I M _ D I M   *   P O O L _ I M _ C H ;   i + + )  
         {  
                 i m g _ i n [ i ]   =   t e s t 1 [ i ] ;  
         }  
  
         p r i n t f ( " S t a r t   m a x p o o l   o p t   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ m a x p o o l _ q 7 _ H W C ( i m g _ i n ,   P O O L _ I M _ D I M ,   P O O L _ I M _ C H ,   3 ,   0 ,   2 ,   P O O L _ I M _ D I M   /   2 ,   ( q 7 _ t   * )   t e s t 2 ,   p o o l _ o u t _ o p t ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( p o o l _ o u t _ r e f ,   p o o l _ o u t _ o p t ,   P O O L _ I M _ D I M   /   2   *   P O O L _ I M _ D I M   /   2   *   P O O L _ I M _ C H ) ;  
  
         / /   c o p y   o v e r   t h e   i m g   i n p u t  
         f o r   ( i n t   i   =   0 ;   i   <   P O O L _ I M _ D I M   *   P O O L _ I M _ D I M   *   P O O L _ I M _ C H ;   i + + )  
         {  
                 i m g _ i n [ i ]   =   t e s t 1 [ i ] ;  
         }  
  
         / /   c o p y   o v e r   t h e   i m g   i n p u t  
         f o r   ( i n t   i   =   0 ;   i   <   P O O L _ I M _ D I M   *   P O O L _ I M _ D I M   *   P O O L _ I M _ C H ;   i + + )  
         {  
                 i m g _ i n [ i ]   =   t e s t 1 [ i ] ;  
         }  
  
         p r i n t f ( " S t a r t   a v e p o o l   r e f   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ a v e p o o l _ q 7 _ H W C _ r e f ( i m g _ i n ,   P O O L _ I M _ D I M ,   P O O L _ I M _ C H ,   3 ,   0 ,   2 ,   P O O L _ I M _ D I M   /   2 ,   ( q 7 _ t   * )   t e s t 2 ,   p o o l _ o u t _ r e f ) ;  
  
         / /   c o p y   o v e r   t h e   i m g   i n p u t  
         f o r   ( i n t   i   =   0 ;   i   <   P O O L _ I M _ D I M   *   P O O L _ I M _ D I M   *   P O O L _ I M _ C H ;   i + + )  
         {  
                 i m g _ i n [ i ]   =   t e s t 1 [ i ] ;  
         }  
  
         p r i n t f ( " S t a r t   a v e p o o l   o p t   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ a v e p o o l _ q 7 _ H W C ( i m g _ i n ,   P O O L _ I M _ D I M ,   P O O L _ I M _ C H ,   3 ,   0 ,   2 ,   P O O L _ I M _ D I M   /   2 ,   ( q 7 _ t   * )   t e s t 2 ,   p o o l _ o u t _ o p t ) ;  
  
         / /   s p e c i a l   c h e c k   h e r e  
         b o o l             i f _ a v e _ p o o l _ m a t c h   =   t r u e ;  
         f o r   ( i n t   i   =   0 ;   i   <   P O O L _ I M _ D I M   /   2   *   P O O L _ I M _ D I M   /   2   *   P O O L _ I M _ C H ;   i + + )  
         {  
                 / /   w e   t o l e r a t e   a t   m o s t   d i f f e r e n c e   o f   1   h e r e   b e c a u s e   o f   r o u n d i n g   e r r o r s  
                 i f   ( p o o l _ o u t _ r e f [ i ]   -   p o o l _ o u t _ o p t [ i ]   > =   2   | |   p o o l _ o u t _ o p t [ i ]   -   p o o l _ o u t _ r e f [ i ]   > =   2 )  
                 {  
                         p r i n t f ( " O u t p u t   m i s m a t c h   a t   % d ,   e x p e c t e d   % d ,   a c t u a l   % d \ n " ,   i ,   p o o l _ o u t _ r e f [ i ] ,   p o o l _ o u t _ o p t [ i ] ) ;  
                         i f _ a v e _ p o o l _ m a t c h   =   f a l s e ;  
                 }  
         }  
         i f   ( i f _ a v e _ p o o l _ m a t c h   = =   t r u e )  
         {  
                 p r i n t f ( " O u t p u t s   m a t c h . \ n " ) ;  
         }  
  
         d e l e t e [ ] t e s t 1 ;  
         d e l e t e [ ] t e s t 2 ;  
         d e l e t e [ ] t e s t 3 ;  
  
 # e n d i f  
  
 # i f d e f   T E S T _ R E L U  
  
 # d e f i n e   R E L U _ D I M   1 2 7  
  
         t e s t 1   =   n e w   q 7 _ t [ R E L U _ D I M ] ;  
         t e s t 2   =   n e w   q 1 5 _ t [ R E L U _ D I M ] ;  
         t e s t 3   =   n e w   q 7 _ t [ R E L U _ D I M ] ;  
         t e s t 4   =   n e w   q 1 5 _ t [ R E L U _ D I M ] ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   R E L U _ D I M ;   i + + )  
         {  
                 t e s t 1 [ i ]   =   ( r a n d ( )   %   2 5 6   -   1 2 8 ) ;  
                 t e s t 2 [ i ]   =   ( r a n d ( )   %   6 5 5 3 6   -   3 2 7 6 8 ) ;  
                 t e s t 3 [ i ]   =   t e s t 1 [ i ] ;  
                 t e s t 4 [ i ]   =   t e s t 2 [ i ] ;  
         }  
  
         q 7 _ t           * r e l u _ r e f _ d a t a _ q 7   =   t e s t 1 ;  
         q 7 _ t           * r e l u _ o p t _ d a t a _ q 7   =   t e s t 3 ;  
         q 1 5 _ t         * r e l u _ r e f _ d a t a _ q 1 5   =   t e s t 2 ;  
         q 1 5 _ t         * r e l u _ o p t _ d a t a _ q 1 5   =   t e s t 4 ;  
  
         p r i n t f ( " S t a r t   r e f   r e l u   q 7   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ r e l u _ q 7 _ r e f ( r e l u _ r e f _ d a t a _ q 7 ,   R E L U _ D I M ) ;  
  
         p r i n t f ( " S t a r t   o p t   r e l u   q 7   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ r e l u _ q 7 ( r e l u _ o p t _ d a t a _ q 7 ,   R E L U _ D I M ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( r e l u _ r e f _ d a t a _ q 7 ,   r e l u _ o p t _ d a t a _ q 7 ,   R E L U _ D I M ) ;  
  
         p r i n t f ( " S t a r t   r e f   r e l u   q 1 5   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ r e l u _ q 1 5 _ r e f ( r e l u _ r e f _ d a t a _ q 1 5 ,   R E L U _ D I M ) ;  
  
         p r i n t f ( " S t a r t   o p t   r e l u   q 1 5   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ r e l u _ q 1 5 ( r e l u _ o p t _ d a t a _ q 1 5 ,   R E L U _ D I M ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( r e l u _ r e f _ d a t a _ q 1 5 ,   r e l u _ o p t _ d a t a _ q 1 5 ,   R E L U _ D I M ) ;  
  
         d e l e t e [ ] t e s t 1 ;  
         d e l e t e [ ] t e s t 2 ;  
         d e l e t e [ ] t e s t 3 ;  
         d e l e t e [ ] t e s t 4 ;  
  
 # e n d i f  
  
 # i f d e f   T E S T _ I P  
  
 # d e f i n e   I P _ R O W _ D I M   1 2 7  
 # d e f i n e   I P _ C O L _ D I M   1 2 7  
  
         q 7 _ t             i p _ w e i g h t s [ I P _ R O W _ D I M   *   I P _ C O L _ D I M ]   =   I P 2 _ W E I G H T ;  
         q 7 _ t             i p _ q 7 _ o p t _ w e i g h t s [ I P _ R O W _ D I M   *   I P _ C O L _ D I M ]   =   I P 4 _ W E I G H T ;  
         q 7 _ t             i p _ q 7 _ q 1 5 _ o p t _ w e i g h t s [ I P _ R O W _ D I M   *   I P _ C O L _ D I M ]   =   I P 4 _ q 7 _ q 1 5 _ W E I G H T ;  
         q 1 5 _ t           i p _ q 1 5 _ w e i g h t s [ I P _ R O W _ D I M   *   I P _ C O L _ D I M ]   =   I P 2 _ W E I G H T ;  
         q 1 5 _ t           i p _ q 1 5 _ o p t _ w e i g h t s [ I P _ R O W _ D I M   *   I P _ C O L _ D I M ]   =   I P 4 _ W E I G H T _ Q 1 5 ;  
  
         t e s t 1   =   n e w   q 7 _ t [ I P _ C O L _ D I M   +   I P _ R O W _ D I M ] ;  
         t e s t 2   =   n e w   q 1 5 _ t [ I P _ C O L _ D I M ] ;  
         t e s t 3   =   n e w   q 7 _ t [ I P _ R O W _ D I M   *   3 ] ;  
         t e s t 4   =   n e w   q 1 5 _ t [ I P _ C O L _ D I M   +   I P _ R O W _ D I M   *   2 ] ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   I P _ R O W _ D I M   +   I P _ C O L _ D I M ;   i + + )  
         {  
                 t e s t 1 [ i ]   =   r a n d ( )   %   2 5 6   -   1 0 0 ;  
         }  
         f o r   ( i n t   i   =   0 ;   i   <   I P _ R O W _ D I M   *   3 ;   i + + )  
         {  
                 t e s t 3 [ i ]   =   0 ;  
         }  
  
         q 7 _ t           * i p _ b i a s _ q 7   =   t e s t 1   +   I P _ C O L _ D I M ;  
  
         q 7 _ t           * i p _ o u t _ q 7 _ r e f   =   t e s t 3 ;  
         q 7 _ t           * i p _ o u t _ q 7 _ o p t   =   t e s t 3   +   I P _ R O W _ D I M ;  
         q 7 _ t           * i p _ o u t _ q 7 _ o p t _ f a s t   =   t e s t 3   +   2   *   I P _ R O W _ D I M ;  
         q 1 5 _ t         * i p _ o u t _ q 1 5 _ r e f   =   t e s t 4   +   I P _ C O L _ D I M ;  
         q 1 5 _ t         * i p _ o u t _ q 1 5 _ o p t   =   t e s t 4   +   I P _ C O L _ D I M   +   I P _ R O W _ D I M ;  
  
         i n i t i a l i z e _ r e s u l t s _ q 7 ( i p _ o u t _ q 7 _ r e f ,   i p _ o u t _ q 7 _ o p t ,   I P _ R O W _ D I M ) ;  
         i n i t i a l i z e _ r e s u l t s _ q 7 ( i p _ o u t _ q 7 _ r e f ,   i p _ o u t _ q 7 _ o p t _ f a s t ,   I P _ R O W _ D I M ) ;  
         i n i t i a l i z e _ r e s u l t s _ q 7 ( i p _ o u t _ q 7 _ r e f ,   i p _ o u t _ q 7 _ o p t _ f a s t ,   I P _ R O W _ D I M ) ;  
  
         p r i n t f ( " S t a r t   r e f   q 7   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ q 7 _ r e f ( t e s t 1 ,   i p _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   i p _ b i a s _ q 7 ,   i p _ o u t _ q 7 _ r e f ,   t e s t 2 ) ;  
  
         p r i n t f ( " S t a r t   q 7   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ q 7 ( t e s t 1 ,   i p _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   i p _ b i a s _ q 7 ,   i p _ o u t _ q 7 _ o p t ,   t e s t 2 ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( i p _ o u t _ q 7 _ r e f ,   i p _ o u t _ q 7 _ o p t ,   I P _ R O W _ D I M ) ;  
  
         p r i n t f ( " S t a r t   q 7   r e f   o p t   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ q 7 _ o p t _ r e f ( t e s t 1 ,   i p _ q 7 _ o p t _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   i p _ b i a s _ q 7 ,  
                                                                       i p _ o u t _ q 7 _ o p t _ f a s t ,   t e s t 2 ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( i p _ o u t _ q 7 _ r e f ,   i p _ o u t _ q 7 _ o p t _ f a s t ,   I P _ R O W _ D I M ) ;  
  
         p r i n t f ( " S t a r t   q 7   o p t   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ q 7 _ o p t ( t e s t 1 ,   i p _ q 7 _ o p t _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   i p _ b i a s _ q 7 ,   i p _ o u t _ q 7 _ o p t _ f a s t ,  
                                                               t e s t 2 ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( i p _ o u t _ q 7 _ r e f ,   i p _ o u t _ q 7 _ o p t _ f a s t ,   I P _ R O W _ D I M ) ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   I P _ R O W _ D I M   +   I P _ C O L _ D I M ;   i + + )  
         {  
                 t e s t 4 [ i ]   =   ( r a n d ( )   %   6 5 5 3 6   -   3 2 7 6 8 ) ;  
         }  
  
         i n i t i a l i z e _ r e s u l t s _ q 1 5 ( i p _ o u t _ q 1 5 _ r e f ,   i p _ o u t _ q 1 5 _ o p t ,   I P _ R O W _ D I M ) ;  
  
         p r i n t f ( " S t a r t   r e f   q 1 5   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ q 1 5 _ r e f ( t e s t 4 ,   i p _ q 1 5 _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   t e s t 2 ,   i p _ o u t _ q 1 5 _ r e f ,   N U L L ) ;  
  
         p r i n t f ( " S t a r t   q 1 5   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ q 1 5 ( t e s t 4 ,   i p _ q 1 5 _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   t e s t 2 ,   i p _ o u t _ q 1 5 _ o p t ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( i p _ o u t _ q 1 5 _ r e f ,   i p _ o u t _ q 1 5 _ o p t ,   I P _ R O W _ D I M ) ;  
  
         p r i n t f ( " S t a r t   r e f   o p t   q 1 5   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ q 1 5 _ o p t _ r e f ( t e s t 4 ,   i p _ q 1 5 _ o p t _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   t e s t 2 ,   i p _ o u t _ q 1 5 _ o p t ,  
                                                                         N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( i p _ o u t _ q 1 5 _ r e f ,   i p _ o u t _ q 1 5 _ o p t ,   I P _ R O W _ D I M ) ;  
  
         p r i n t f ( " S t a r t   o p t   q 1 5   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ q 1 5 _ o p t ( t e s t 4 ,   i p _ q 1 5 _ o p t _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   t e s t 2 ,   i p _ o u t _ q 1 5 _ o p t ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( i p _ o u t _ q 1 5 _ r e f ,   i p _ o u t _ q 1 5 _ o p t ,   I P _ R O W _ D I M ) ;  
  
         i n i t i a l i z e _ r e s u l t s _ q 1 5 ( i p _ o u t _ q 1 5 _ r e f ,   i p _ o u t _ q 1 5 _ o p t ,   I P _ R O W _ D I M ) ;  
  
         p r i n t f ( " S t a r t   r e f   q 7 _ q 1 5   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ m a t _ q 7 _ v e c _ q 1 5 _ r e f ( t e s t 4 ,   i p _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   i p _ b i a s _ q 7 ,   i p _ o u t _ q 1 5 _ r e f ,  
                                                                                       t e s t 2 ) ;  
  
         p r i n t f ( " S t a r t   q 7 _ q 1 5   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ m a t _ q 7 _ v e c _ q 1 5 ( t e s t 4 ,   i p _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   i p _ b i a s _ q 7 ,   i p _ o u t _ q 1 5 _ o p t ,  
                                                                               t e s t 2 ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( i p _ o u t _ q 1 5 _ r e f ,   i p _ o u t _ q 1 5 _ o p t ,   I P _ R O W _ D I M ) ;  
  
         p r i n t f ( " S t a r t   r e f   o p t   q 7 _ q 1 5   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ m a t _ q 7 _ v e c _ q 1 5 _ o p t _ r e f ( t e s t 4 ,   i p _ q 7 _ q 1 5 _ o p t _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   i p _ b i a s _ q 7 ,  
                                                                                               i p _ o u t _ q 1 5 _ o p t ,   t e s t 2 ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( i p _ o u t _ q 1 5 _ r e f ,   i p _ o u t _ q 1 5 _ o p t ,   I P _ R O W _ D I M ) ;  
  
         p r i n t f ( " S t a r t   o p t   q 7 _ q 1 5   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ f u l l y _ c o n n e c t e d _ m a t _ q 7 _ v e c _ q 1 5 _ o p t ( t e s t 4 ,   i p _ q 7 _ q 1 5 _ o p t _ w e i g h t s ,   I P _ C O L _ D I M ,   I P _ R O W _ D I M ,   1 ,   7 ,   i p _ b i a s _ q 7 ,  
                                                                                       i p _ o u t _ q 1 5 _ o p t ,   t e s t 2 ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( i p _ o u t _ q 1 5 _ r e f ,   i p _ o u t _ q 1 5 _ o p t ,   I P _ R O W _ D I M ) ;  
  
         d e l e t e [ ] t e s t 1 ;  
         d e l e t e [ ] t e s t 2 ;  
         d e l e t e [ ] t e s t 3 ;  
         d e l e t e [ ] t e s t 4 ;  
  
 # e n d i f  
  
 # i f d e f   T E S T _ N O N S Q U A R E  
  
 / *   U s e   R C O N V   t o   d i f f e r e n t i a l   w i t h   s q u a r e   C O N V   * /  
  
 # d e f i n e   R C O N V _ I M _ D I M _ X   1 0  
 # d e f i n e   R C O N V _ I M _ D I M _ Y   8  
 # d e f i n e   R C O N V _ I M _ C H   4  
 # d e f i n e   R C O N V _ K E R _ D I M _ X   5  
 # d e f i n e   R C O N V _ K E R _ D I M _ Y   3  
 # d e f i n e   R C O N V _ S T R I D E _ X   1  
 # d e f i n e   R C O N V _ S T R I D E _ Y   1  
 # d e f i n e   R C O N V _ P A D D I N G _ X   2  
 # d e f i n e   R C O N V _ P A D D I N G _ Y   1  
 # d e f i n e   R C O N V _ O U T _ C H   4  
 # d e f i n e   R C O N V _ O U T _ D I M _ X   1 0  
 # d e f i n e   R C O N V _ O U T _ D I M _ Y   8  
  
         t e s t 1   =   n e w   q 7 _ t [ R C O N V _ K E R _ D I M _ Y   *   R C O N V _ K E R _ D I M _ X   *   R C O N V _ I M _ C H   *   R C O N V _ O U T _ C H   +   R C O N V _ O U T _ C H ] ;  
         t e s t 2   =   n e w   q 1 5 _ t [ 2   *   R C O N V _ K E R _ D I M _ Y   *   R C O N V _ K E R _ D I M _ X   *   R C O N V _ I M _ C H ] ;  
         t e s t 3   =  
                 n e w   q 7 _ t [ R C O N V _ I M _ D I M _ Y   *   R C O N V _ I M _ D I M _ X   *   R C O N V _ I M _ C H   +   2   *   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ] ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   R C O N V _ K E R _ D I M _ Y   *   R C O N V _ K E R _ D I M _ X   *   R C O N V _ I M _ C H   *   R C O N V _ O U T _ C H   +   R C O N V _ O U T _ C H ;   i + + )  
         {  
                 t e s t 1 [ i ]   =   r a n d ( )   %   2 5 6   -   1 0 0 ;  
         }  
  
         f o r   ( i n t   i   =   0 ;  
                   i   <   R C O N V _ I M _ D I M _ Y   *   R C O N V _ I M _ D I M _ X   *   R C O N V _ I M _ C H   +   2   *   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ;   i + + )  
         {  
                 t e s t 3 [ i ]   =   r a n d ( )   %   2 5 6   -   1 0 0 ;  
         }  
  
         q 7 _ t           * r c o n v _ w e i g h t _ q 7   =   t e s t 1 ;  
         q 7 _ t           * r c o n v _ b i a s _ q 7   =   t e s t 1   +   R C O N V _ K E R _ D I M _ Y   *   R C O N V _ K E R _ D I M _ X   *   R C O N V _ I M _ C H   *   R C O N V _ O U T _ C H ;  
  
         q 1 5 _ t         * r c o n v _ b u f   =   t e s t 2 ;  
  
         q 7 _ t           * r c o n v _ i m _ i n _ q 7   =   t e s t 3 ;  
         q 7 _ t           * r c o n v _ i m _ o u t _ r e f _ q 7   =   t e s t 3   +   R C O N V _ I M _ D I M _ Y   *   R C O N V _ I M _ D I M _ X   *   R C O N V _ I M _ C H ;  
         q 7 _ t           * r c o n v _ i m _ o u t _ o p t _ q 7   =  
                 t e s t 3   +   R C O N V _ I M _ D I M _ Y   *   R C O N V _ I M _ D I M _ X   *   R C O N V _ I M _ C H   +   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ;  
  
         i n i t i a l i z e _ r e s u l t s _ q 7 ( r c o n v _ i m _ o u t _ r e f _ q 7 ,   r c o n v _ i m _ o u t _ o p t _ q 7 ,   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ) ;  
  
         p r i n t f ( " s t a r t   c o n v   q 7   n o n s q u a r e   r e f   i m p l e m e n t a t i o n \ n " ) ;  
         a r m _ c o n v o l v e _ H W C _ q 7 _ r e f _ n o n s q u a r e ( r c o n v _ i m _ i n _ q 7 ,   R C O N V _ I M _ D I M _ X ,   R C O N V _ I M _ D I M _ Y ,   R C O N V _ I M _ C H ,   r c o n v _ w e i g h t _ q 7 ,  
                                                                             R C O N V _ O U T _ C H ,   R C O N V _ K E R _ D I M _ X ,   R C O N V _ K E R _ D I M _ Y ,   R C O N V _ P A D D I N G _ X ,   R C O N V _ P A D D I N G _ Y ,  
                                                                             R C O N V _ S T R I D E _ X ,   R C O N V _ S T R I D E _ Y ,   r c o n v _ b i a s _ q 7 ,   1 ,   7 ,   r c o n v _ i m _ o u t _ r e f _ q 7 ,  
                                                                             R C O N V _ O U T _ D I M _ X ,   R C O N V _ O U T _ D I M _ Y ,   r c o n v _ b u f ,   N U L L ) ;  
  
         p r i n t f ( " s t a r t   c o n v   q 7   n o n s q u a r e   o p t   i m p l e m e n t a t i o n \ n " ) ;  
         a r m _ c o n v o l v e _ H W C _ q 7 _ f a s t _ n o n s q u a r e ( r c o n v _ i m _ i n _ q 7 ,   R C O N V _ I M _ D I M _ X ,   R C O N V _ I M _ D I M _ Y ,   R C O N V _ I M _ C H ,   r c o n v _ w e i g h t _ q 7 ,  
                                                                               R C O N V _ O U T _ C H ,   R C O N V _ K E R _ D I M _ X ,   R C O N V _ K E R _ D I M _ Y ,   R C O N V _ P A D D I N G _ X ,   R C O N V _ P A D D I N G _ Y ,  
                                                                               R C O N V _ S T R I D E _ X ,   R C O N V _ S T R I D E _ Y ,   r c o n v _ b i a s _ q 7 ,   1 ,   7 ,   r c o n v _ i m _ o u t _ o p t _ q 7 ,  
                                                                               R C O N V _ O U T _ D I M _ X ,   R C O N V _ O U T _ D I M _ Y ,   r c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( r c o n v _ i m _ o u t _ r e f _ q 7 ,   r c o n v _ i m _ o u t _ o p t _ q 7 ,   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ) ;  
  
         i n i t i a l i z e _ r e s u l t s _ q 7 ( r c o n v _ i m _ o u t _ r e f _ q 7 ,   r c o n v _ i m _ o u t _ o p t _ q 7 ,   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ) ;  
  
         p r i n t f ( " s t a r t   c o n v   q 7   n o n s q u a r e   r e f   i m p l e m e n t a t i o n \ n " ) ;  
         a r m _ c o n v o l v e _ H W C _ q 7 _ r e f _ n o n s q u a r e ( r c o n v _ i m _ i n _ q 7 ,   R C O N V _ I M _ D I M _ X ,   R C O N V _ I M _ D I M _ Y ,   R C O N V _ I M _ C H ,   r c o n v _ w e i g h t _ q 7 ,  
                                                                             R C O N V _ O U T _ C H ,   R C O N V _ K E R _ D I M _ X ,   R C O N V _ K E R _ D I M _ Y ,   R C O N V _ P A D D I N G _ X ,   R C O N V _ P A D D I N G _ Y ,  
                                                                             R C O N V _ S T R I D E _ X ,   R C O N V _ S T R I D E _ Y ,   r c o n v _ b i a s _ q 7 ,   1 ,   7 ,   r c o n v _ i m _ o u t _ r e f _ q 7 ,  
                                                                             R C O N V _ O U T _ D I M _ X ,   R C O N V _ O U T _ D I M _ Y ,   r c o n v _ b u f ,   N U L L ) ;  
  
         p r i n t f ( " s t a r t   c o n v   q 7   n o n s q u a r e   b a s i c   i m p l e m e n t a t i o n \ n " ) ;  
         a r m _ c o n v o l v e _ H W C _ q 7 _ b a s i c _ n o n s q u a r e ( r c o n v _ i m _ i n _ q 7 ,   R C O N V _ I M _ D I M _ X ,   R C O N V _ I M _ D I M _ Y ,   R C O N V _ I M _ C H ,   r c o n v _ w e i g h t _ q 7 ,  
                                                                               R C O N V _ O U T _ C H ,   R C O N V _ K E R _ D I M _ X ,   R C O N V _ K E R _ D I M _ Y ,   R C O N V _ P A D D I N G _ X ,   R C O N V _ P A D D I N G _ Y ,  
                                                                               R C O N V _ S T R I D E _ X ,   R C O N V _ S T R I D E _ Y ,   r c o n v _ b i a s _ q 7 ,   1 ,   7 ,   r c o n v _ i m _ o u t _ o p t _ q 7 ,  
                                                                               R C O N V _ O U T _ D I M _ X ,   R C O N V _ O U T _ D I M _ Y ,   r c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( r c o n v _ i m _ o u t _ r e f _ q 7 ,   r c o n v _ i m _ o u t _ o p t _ q 7 ,   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ) ;  
  
         i n i t i a l i z e _ r e s u l t s _ q 7 ( r c o n v _ i m _ o u t _ r e f _ q 7 ,   r c o n v _ i m _ o u t _ o p t _ q 7 ,   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ) ;  
  
         p r i n t f ( " s t a r t   1 x 1   c o n v   q 7   n o n s q u a r e   f a s t   i m p l e m e n t a t i o n \ n " ) ;  
         a r m _ c o n v o l v e _ H W C _ q 7 _ f a s t _ n o n s q u a r e ( r c o n v _ i m _ i n _ q 7 ,   R C O N V _ I M _ D I M _ X ,   R C O N V _ I M _ D I M _ Y ,   R C O N V _ I M _ C H ,   r c o n v _ w e i g h t _ q 7 ,  
                                                                               R C O N V _ O U T _ C H ,   1 ,   1 ,   0 ,   0 ,   R C O N V _ S T R I D E _ X ,  
                                                                               R C O N V _ S T R I D E _ Y ,   r c o n v _ b i a s _ q 7 ,   1 ,   7 ,   r c o n v _ i m _ o u t _ r e f _ q 7 ,   R C O N V _ O U T _ D I M _ X ,  
                                                                               R C O N V _ O U T _ D I M _ Y ,   r c o n v _ b u f ,   N U L L ) ;  
  
         p r i n t f ( " s t a r t   1 x 1   c o n v   q 7   n o n s q u a r e   d e d i c a t e d   f u n c t i o n   i m p l e m e n t a t i o n \ n " ) ;  
         a r m _ c o n v o l v e _ 1 x 1 _ H W C _ q 7 _ f a s t _ n o n s q u a r e ( r c o n v _ i m _ i n _ q 7 ,   R C O N V _ I M _ D I M _ X ,   R C O N V _ I M _ D I M _ Y ,   R C O N V _ I M _ C H ,   r c o n v _ w e i g h t _ q 7 ,  
                                                                                       R C O N V _ O U T _ C H ,   1 ,   1 ,   0 ,   0 ,   R C O N V _ S T R I D E _ X ,  
                                                                                       R C O N V _ S T R I D E _ Y ,   r c o n v _ b i a s _ q 7 ,   1 ,   7 ,   r c o n v _ i m _ o u t _ o p t _ q 7 ,   R C O N V _ O U T _ D I M _ X ,  
                                                                                       R C O N V _ O U T _ D I M _ Y ,   r c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( r c o n v _ i m _ o u t _ r e f _ q 7 ,   r c o n v _ i m _ o u t _ o p t _ q 7 ,   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ) ;  
  
         p r i n t f ( " s t a r t   d e p t h w i s e   s e p a r a b l e   c o n v   q 7   n o n s q u a r e   r e f   i m p l e m e n t a t i o n \ n " ) ;  
         a r m _ d e p t h w i s e _ s e p a r a b l e _ c o n v _ H W C _ q 7 _ r e f _ n o n s q u a r e ( r c o n v _ i m _ i n _ q 7 ,   R C O N V _ I M _ D I M _ X ,   R C O N V _ I M _ D I M _ Y ,   R C O N V _ I M _ C H ,  
                                                                                                             r c o n v _ w e i g h t _ q 7 ,   R C O N V _ O U T _ C H ,   R C O N V _ K E R _ D I M _ X ,   R C O N V _ K E R _ D I M _ Y ,  
                                                                                                             R C O N V _ P A D D I N G _ X ,   R C O N V _ P A D D I N G _ Y ,   R C O N V _ S T R I D E _ X ,   R C O N V _ S T R I D E _ Y ,  
                                                                                                             r c o n v _ b i a s _ q 7 ,   1 ,   7 ,   r c o n v _ i m _ o u t _ r e f _ q 7 ,   R C O N V _ O U T _ D I M _ X ,  
                                                                                                             R C O N V _ O U T _ D I M _ Y ,   r c o n v _ b u f ,   N U L L ) ;  
  
         p r i n t f ( " s t a r t   d e p t h w i s e   s e p a r a b l e   c o n v   q 7   n o n s q u a r e   o p t   i m p l e m e n t a t i o n \ n " ) ;  
         a r m _ d e p t h w i s e _ s e p a r a b l e _ c o n v _ H W C _ q 7 _ n o n s q u a r e ( r c o n v _ i m _ i n _ q 7 ,   R C O N V _ I M _ D I M _ X ,   R C O N V _ I M _ D I M _ Y ,   R C O N V _ I M _ C H ,  
                                                                                                     r c o n v _ w e i g h t _ q 7 ,   R C O N V _ O U T _ C H ,   R C O N V _ K E R _ D I M _ X ,   R C O N V _ K E R _ D I M _ Y ,  
                                                                                                     R C O N V _ P A D D I N G _ X ,   R C O N V _ P A D D I N G _ Y ,   R C O N V _ S T R I D E _ X ,   R C O N V _ S T R I D E _ Y ,  
                                                                                                     r c o n v _ b i a s _ q 7 ,   1 ,   7 ,   r c o n v _ i m _ o u t _ o p t _ q 7 ,   R C O N V _ O U T _ D I M _ X ,  
                                                                                                     R C O N V _ O U T _ D I M _ Y ,   r c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( r c o n v _ i m _ o u t _ r e f _ q 7 ,   r c o n v _ i m _ o u t _ o p t _ q 7 ,   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ) ;  
  
         d e l e t e [ ] t e s t 1 ;  
         d e l e t e [ ] t e s t 2 ;  
         d e l e t e [ ] t e s t 3 ;  
 	  
 	 t e s t 2   =   n e w   q 1 5 _ t [ R C O N V _ K E R _ D I M _ Y   *   R C O N V _ K E R _ D I M _ X   *   R C O N V _ I M _ C H   *   R C O N V _ O U T _ C H   +   R C O N V _ O U T _ C H ] ;   / /   w e i g h t s   +   b i a s  
 	 t e s t 4   =   n e w   q 1 5 _ t [ 2   *   R C O N V _ K E R _ D I M _ Y   *   R C O N V _ K E R _ D I M _ X   *   R C O N V _ I M _ C H       / / b u f f e r  
 	                   +   R C O N V _ I M _ D I M _ Y   *   R C O N V _ I M _ D I M _ X   *   R C O N V _ I M _ C H   +   2   *   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ] ;   / /   i / o  
  
         f o r   ( i n t   i   =   0 ;   i   <   R C O N V _ K E R _ D I M _ Y   *   R C O N V _ K E R _ D I M _ X   *   R C O N V _ I M _ C H   *   R C O N V _ O U T _ C H   +   R C O N V _ O U T _ C H ;   i + + )  
         {  
                 t e s t 2 [ i ]   =   r a n d ( )   %   2 5 6   -   1 0 0 ;  
         }  
  
         f o r   ( i n t   i   =   0 ;  
                   i   <   2   *   R C O N V _ K E R _ D I M _ Y   *   R C O N V _ K E R _ D I M _ X   *   R C O N V _ I M _ C H  
                   +   R C O N V _ I M _ D I M _ Y   *   R C O N V _ I M _ D I M _ X   *   R C O N V _ I M _ C H   +   2   *   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ;  
                 i + + )  
         {  
                 t e s t 4 [ i ]   =   r a n d ( )   %   2 5 6   -   1 0 0 ;  
         }  
  
         q 1 5 _ t           * r c o n v _ w e i g h t _ q 1 5   =   t e s t 2 ;  
         q 1 5 _ t           * r c o n v _ b i a s _ q 1 5   =   t e s t 2   +   R C O N V _ K E R _ D I M _ Y   *   R C O N V _ K E R _ D I M _ X   *   R C O N V _ I M _ C H   *   R C O N V _ O U T _ C H ;  
  
         r c o n v _ b u f   =   t e s t 4 ;  
  
         q 1 5 _ t           * r c o n v _ i m _ i n _ q 1 5   =   t e s t 4   +   2   *   R C O N V _ K E R _ D I M _ Y   *   R C O N V _ K E R _ D I M _ X   *   R C O N V _ I M _ C H ;  
         q 1 5 _ t           * r c o n v _ i m _ o u t _ r e f _ q 1 5   =   r c o n v _ i m _ i n _ q 1 5   +   R C O N V _ I M _ D I M _ Y   *   R C O N V _ I M _ D I M _ X   *   R C O N V _ I M _ C H ;  
         q 1 5 _ t           * r c o n v _ i m _ o u t _ o p t _ q 1 5   =   r c o n v _ i m _ o u t _ r e f _ q 1 5   +   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ;  
  
         i n i t i a l i z e _ r e s u l t s _ q 1 5 ( r c o n v _ i m _ o u t _ r e f _ q 1 5 ,   r c o n v _ i m _ o u t _ o p t _ q 1 5 ,   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ) ;  
  
         p r i n t f ( " s t a r t   c o n v   q 1 5   n o n s q u a r e   r e f   i m p l e m e n t a t i o n \ n " ) ;  
         a r m _ c o n v o l v e _ H W C _ q 1 5 _ n o n s q u a r e _ r e f ( r c o n v _ i m _ i n _ q 1 5 ,   R C O N V _ I M _ D I M _ X ,   R C O N V _ I M _ D I M _ Y ,   R C O N V _ I M _ C H ,   r c o n v _ w e i g h t _ q 1 5 ,  
                                                                             R C O N V _ O U T _ C H ,   R C O N V _ K E R _ D I M _ X ,   R C O N V _ K E R _ D I M _ Y ,   R C O N V _ P A D D I N G _ X ,   R C O N V _ P A D D I N G _ Y ,  
                                                                             R C O N V _ S T R I D E _ X ,   R C O N V _ S T R I D E _ Y ,   r c o n v _ b i a s _ q 1 5 ,   1 ,   7 ,   r c o n v _ i m _ o u t _ r e f _ q 1 5 ,  
                                                                             R C O N V _ O U T _ D I M _ X ,   R C O N V _ O U T _ D I M _ Y ,   r c o n v _ b u f ,   N U L L ) ;  
  
         p r i n t f ( " s t a r t   c o n v   q 5   n o n s q u a r e   o p t   i m p l e m e n t a t i o n \ n " ) ;  
         a r m _ c o n v o l v e _ H W C _ q 1 5 _ f a s t _ n o n s q u a r e ( r c o n v _ i m _ i n _ q 1 5 ,   R C O N V _ I M _ D I M _ X ,   R C O N V _ I M _ D I M _ Y ,   R C O N V _ I M _ C H ,   r c o n v _ w e i g h t _ q 1 5 ,  
                                                                               R C O N V _ O U T _ C H ,   R C O N V _ K E R _ D I M _ X ,   R C O N V _ K E R _ D I M _ Y ,   R C O N V _ P A D D I N G _ X ,   R C O N V _ P A D D I N G _ Y ,  
                                                                               R C O N V _ S T R I D E _ X ,   R C O N V _ S T R I D E _ Y ,   r c o n v _ b i a s _ q 1 5 ,   1 ,   7 ,   r c o n v _ i m _ o u t _ o p t _ q 1 5 ,  
                                                                               R C O N V _ O U T _ D I M _ X ,   R C O N V _ O U T _ D I M _ Y ,   r c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( r c o n v _ i m _ o u t _ r e f _ q 1 5 ,   r c o n v _ i m _ o u t _ o p t _ q 1 5 ,   R C O N V _ O U T _ D I M _ Y   *   R C O N V _ O U T _ D I M _ X   *   R C O N V _ O U T _ C H ) ;  
 	  
         d e l e t e   [ ]   t e s t 2 ;  
         d e l e t e   [ ]   t e s t 4 ;  
 # e n d i f  
  
 # i f d e f   T E S T _ C O N V  
  
 # d e f i n e   C O N V _ I M _ D I M   1 6  
 # d e f i n e   C O N V _ I M _ C H   1 6  
 # d e f i n e   C O N V _ K E R _ D I M   5  
 # d e f i n e   C O N V _ O U T _ C H   1 6  
 # d e f i n e   C O N V _ O U T _ D I M   1 6  
  
         t e s t 1   =   n e w   q 7 _ t [ C O N V _ K E R _ D I M   *   C O N V _ K E R _ D I M   *   C O N V _ I M _ C H   *   C O N V _ O U T _ C H   +   C O N V _ O U T _ C H ] ;  
         t e s t 2   =  
                 n e w   q 1 5 _ t [ C O N V _ K E R _ D I M   *   C O N V _ K E R _ D I M   *   C O N V _ I M _ C H   *   C O N V _ O U T _ C H   +  
                                     2   *   C O N V _ K E R _ D I M   *   C O N V _ K E R _ D I M   *   C O N V _ I M _ C H   *   C O N V _ O U T _ C H   +   C O N V _ O U T _ C H ] ;  
         t e s t 3   =   n e w   q 7 _ t [ C O N V _ I M _ D I M   *   C O N V _ I M _ D I M   *   C O N V _ I M _ C H   +   2   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ] ;  
         t e s t 4   =   n e w   q 1 5 _ t [ C O N V _ I M _ D I M   *   C O N V _ I M _ D I M   *   C O N V _ I M _ C H   +   2   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ] ;  
  
         f o r   ( i n t   i   =   0 ;   i   <   C O N V _ K E R _ D I M   *   C O N V _ K E R _ D I M   *   C O N V _ I M _ C H   *   C O N V _ O U T _ C H   +   C O N V _ O U T _ C H ;   i + + )  
         {  
                 t e s t 1 [ i ]   =   r a n d ( )   %   2 5 6   -   1 0 0 ;  
         }  
  
         f o r   ( i n t   i   =   0 ;  
                   i   <  
                   C O N V _ K E R _ D I M   *   C O N V _ K E R _ D I M   *   C O N V _ I M _ C H   *   C O N V _ O U T _ C H   +  
                   2   *   C O N V _ K E R _ D I M   *   C O N V _ K E R _ D I M   *   C O N V _ I M _ C H   *   C O N V _ O U T _ C H   +   C O N V _ O U T _ C H ;   i + + )  
         {  
                 t e s t 2 [ i ]   =   ( r a n d ( )   %   6 5 5 3 6   -   3 2 7 6 8 ) ;  
         }  
  
         f o r   ( i n t   i   =   0 ;   i   <   C O N V _ I M _ D I M   *   C O N V _ I M _ D I M   *   C O N V _ I M _ C H   +   2   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ;   i + + )  
         {  
                 t e s t 3 [ i ]   =   r a n d ( )   %   2 5 6   -   1 0 0 ;  
         }  
  
         f o r   ( i n t   i   =   0 ;   i   <   C O N V _ I M _ D I M   *   C O N V _ I M _ D I M   *   C O N V _ I M _ C H   +   2   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ;   i + + )  
         {  
                 t e s t 4 [ i ]   =   ( r a n d ( )   %   6 5 5 3 6   -   3 2 7 6 8 ) ;  
         }  
  
         q 7 _ t           * c o n v _ w e i g h t _ q 7   =   t e s t 1 ;  
         q 7 _ t           * c o n v _ b i a s _ q 7   =   t e s t 1   +   C O N V _ K E R _ D I M   *   C O N V _ K E R _ D I M   *   C O N V _ I M _ C H   *   C O N V _ O U T _ C H ;  
  
         q 1 5 _ t         * c o n v _ w e i g h t _ q 1 5   =   t e s t 2 ;  
         q 1 5 _ t         * c o n v _ b u f   =   t e s t 2   +   C O N V _ K E R _ D I M   *   C O N V _ K E R _ D I M   *   C O N V _ I M _ C H   *   C O N V _ O U T _ C H ;  
         q 1 5 _ t         * c o n v _ b i a s _ q 1 5   =  
                 t e s t 2   +   C O N V _ K E R _ D I M   *   C O N V _ K E R _ D I M   *   C O N V _ I M _ C H   *   C O N V _ O U T _ C H   +  
                 2   *   C O N V _ K E R _ D I M   *   C O N V _ K E R _ D I M   *   C O N V _ I M _ C H   *   C O N V _ O U T _ C H ;  
  
         q 7 _ t           * c o n v _ i m _ i n _ q 7   =   t e s t 3 ;  
         q 7 _ t           * c o n v _ i m _ o u t _ r e f _ q 7   =   t e s t 3   +   C O N V _ I M _ D I M   *   C O N V _ I M _ D I M   *   C O N V _ I M _ C H ;  
         q 7 _ t           * c o n v _ i m _ o u t _ o p t _ q 7   =  
                 t e s t 3   +   C O N V _ I M _ D I M   *   C O N V _ I M _ D I M   *   C O N V _ I M _ C H   +   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ;  
  
         q 1 5 _ t         * c o n v _ i m _ i n _ q 1 5   =   t e s t 4 ;  
         q 1 5 _ t         * c o n v _ i m _ o u t _ r e f _ q 1 5   =   t e s t 4   +   C O N V _ I M _ D I M   *   C O N V _ I M _ D I M   *   C O N V _ I M _ C H ;  
         q 1 5 _ t         * c o n v _ i m _ o u t _ o p t _ q 1 5   =  
                 t e s t 4   +   C O N V _ I M _ D I M   *   C O N V _ I M _ D I M   *   C O N V _ I M _ C H   +   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ;  
  
         i n i t i a l i z e _ r e s u l t s _ q 7 ( c o n v _ i m _ o u t _ r e f _ q 7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ) ;  
  
         p r i n t f ( " s t a r t   q 7   r e f   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ c o n v o l v e _ H W C _ q 7 _ r e f ( c o n v _ i m _ i n _ q 7 ,   C O N V _ I M _ D I M ,   C O N V _ I M _ C H ,   c o n v _ w e i g h t _ q 7 ,  
                                                         C O N V _ O U T _ C H ,   C O N V _ K E R _ D I M ,   2 ,   1 ,   c o n v _ b i a s _ q 7 ,   1 ,   7 ,   c o n v _ i m _ o u t _ r e f _ q 7 ,  
                                                         C O N V _ O U T _ D I M ,   c o n v _ b u f ,   N U L L ) ;  
  
         p r i n t f ( " s t a r t   q 7   b a s i c   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ c o n v o l v e _ H W C _ q 7 _ b a s i c ( c o n v _ i m _ i n _ q 7 ,   C O N V _ I M _ D I M ,   C O N V _ I M _ C H ,   c o n v _ w e i g h t _ q 7 ,  
                                                             C O N V _ O U T _ C H ,   C O N V _ K E R _ D I M ,   2 ,   1 ,   c o n v _ b i a s _ q 7 ,   1 ,   7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,  
                                                             C O N V _ O U T _ D I M ,   c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( c o n v _ i m _ o u t _ r e f _ q 7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ) ;  
  
         p r i n t f ( " s t a r t   q 7   f a s t   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ c o n v o l v e _ H W C _ q 7 _ f a s t ( c o n v _ i m _ i n _ q 7 ,   C O N V _ I M _ D I M ,   C O N V _ I M _ C H ,   c o n v _ w e i g h t _ q 7 ,  
                                                           C O N V _ O U T _ C H ,   C O N V _ K E R _ D I M ,   2 ,   1 ,   c o n v _ b i a s _ q 7 ,   1 ,   7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,  
                                                           C O N V _ O U T _ D I M ,   c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( c o n v _ i m _ o u t _ r e f _ q 7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ) ;  
  
         / /   t e s t i n g   w i t h   R G B  
         p r i n t f ( " s t a r t   q 7   r e f   i m p l e m e n t a t i o n   f o r   R G B \ n " ) ;  
  
         a r m _ c o n v o l v e _ H W C _ q 7 _ r e f ( c o n v _ i m _ i n _ q 7 ,   C O N V _ I M _ D I M ,   3 ,   c o n v _ w e i g h t _ q 7 ,  
                                                         C O N V _ O U T _ C H ,   C O N V _ K E R _ D I M ,   2 ,   1 ,   c o n v _ b i a s _ q 7 ,   1 ,   7 ,   c o n v _ i m _ o u t _ r e f _ q 7 ,  
                                                         C O N V _ O U T _ D I M ,   c o n v _ b u f ,   N U L L ) ;  
  
         p r i n t f ( " s t a r t   q 7   b a s i c   i m p l e m e n t a t i o n   f o r   R G B \ n " ) ;  
  
         a r m _ c o n v o l v e _ H W C _ q 7 _ b a s i c ( c o n v _ i m _ i n _ q 7 ,   C O N V _ I M _ D I M ,   3 ,   c o n v _ w e i g h t _ q 7 ,  
                                                             C O N V _ O U T _ C H ,   C O N V _ K E R _ D I M ,   2 ,   1 ,   c o n v _ b i a s _ q 7 ,   1 ,   7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,  
                                                             C O N V _ O U T _ D I M ,   c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( c o n v _ i m _ o u t _ r e f _ q 7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ) ;  
  
         p r i n t f ( " s t a r t   q 7   R G B   i m p l e m e n t a t i o n   f o r   R G B \ n " ) ;  
  
         a r m _ c o n v o l v e _ H W C _ q 7 _ R G B ( c o n v _ i m _ i n _ q 7 ,   C O N V _ I M _ D I M ,   3 ,   c o n v _ w e i g h t _ q 7 ,  
                                                         C O N V _ O U T _ C H ,   C O N V _ K E R _ D I M ,   2 ,   1 ,   c o n v _ b i a s _ q 7 ,   1 ,   7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,  
                                                         C O N V _ O U T _ D I M ,   c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( c o n v _ i m _ o u t _ r e f _ q 7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ) ;  
  
         / /   t e s t i n g   q 1 5  
         i n i t i a l i z e _ r e s u l t s _ q 1 5 ( c o n v _ i m _ o u t _ r e f _ q 1 5 ,   c o n v _ i m _ o u t _ o p t _ q 1 5 ,   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ) ;  
  
         p r i n t f ( " s t a r t   q 1 5   r e f   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ c o n v o l v e _ H W C _ q 1 5 _ r e f ( c o n v _ i m _ i n _ q 1 5 ,   C O N V _ I M _ D I M ,   C O N V _ I M _ C H ,   c o n v _ w e i g h t _ q 1 5 ,  
                                                           C O N V _ O U T _ C H ,   C O N V _ K E R _ D I M ,   2 ,   1 ,   c o n v _ b i a s _ q 1 5 ,   0 ,   1 5 ,   c o n v _ i m _ o u t _ r e f _ q 1 5 ,  
                                                           C O N V _ O U T _ D I M ,   c o n v _ b u f ,   N U L L ) ;  
  
         p r i n t f ( " s t a r t   q 1 5   b a s i c   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ c o n v o l v e _ H W C _ q 1 5 _ b a s i c ( c o n v _ i m _ i n _ q 1 5 ,   C O N V _ I M _ D I M ,   C O N V _ I M _ C H ,   c o n v _ w e i g h t _ q 1 5 ,  
                                                               C O N V _ O U T _ C H ,   C O N V _ K E R _ D I M ,   2 ,   1 ,   c o n v _ b i a s _ q 1 5 ,   0 ,   1 5 ,   c o n v _ i m _ o u t _ o p t _ q 1 5 ,  
                                                               C O N V _ O U T _ D I M ,   c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( c o n v _ i m _ o u t _ r e f _ q 1 5 ,   c o n v _ i m _ o u t _ o p t _ q 1 5 ,   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ) ;  
  
         p r i n t f ( " s t a r t   q 1 5   f a s t   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ c o n v o l v e _ H W C _ q 1 5 _ f a s t ( c o n v _ i m _ i n _ q 1 5 ,   C O N V _ I M _ D I M ,   C O N V _ I M _ C H ,   c o n v _ w e i g h t _ q 1 5 ,  
                                                             C O N V _ O U T _ C H ,   C O N V _ K E R _ D I M ,   2 ,   1 ,   c o n v _ b i a s _ q 1 5 ,   0 ,   1 5 ,   c o n v _ i m _ o u t _ o p t _ q 1 5 ,  
                                                             C O N V _ O U T _ D I M ,   c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 1 5 ( c o n v _ i m _ o u t _ r e f _ q 1 5 ,   c o n v _ i m _ o u t _ o p t _ q 1 5 ,   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ) ;  
  
         / /   d e p t h w i s e   s e p a r a b l e   c o n v  
         i n i t i a l i z e _ r e s u l t s _ q 7 ( c o n v _ i m _ o u t _ r e f _ q 7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ) ;  
  
         p r i n t f ( " s t a r t   q 7   d e p t h w i s e _ s e p a r a b l e _ c o n v   r e f   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ d e p t h w i s e _ s e p a r a b l e _ c o n v _ H W C _ q 7 _ r e f ( c o n v _ i m _ i n _ q 7 ,   C O N V _ I M _ D I M ,   C O N V _ I M _ C H ,   c o n v _ w e i g h t _ q 7 ,  
                                                                                         C O N V _ O U T _ C H ,   C O N V _ K E R _ D I M ,   2 ,   1 ,   c o n v _ b i a s _ q 7 ,   1 ,   7 ,   c o n v _ i m _ o u t _ r e f _ q 7 ,  
                                                                                         C O N V _ O U T _ D I M ,   c o n v _ b u f ,   N U L L ) ;  
  
         p r i n t f ( " s t a r t   q 7   d e p t h w i s e _ s e p a r a b l e _ c o n v   i m p l e m e n t a t i o n \ n " ) ;  
  
         a r m _ d e p t h w i s e _ s e p a r a b l e _ c o n v _ H W C _ q 7 ( c o n v _ i m _ i n _ q 7 ,   C O N V _ I M _ D I M ,   C O N V _ I M _ C H ,   c o n v _ w e i g h t _ q 7 ,  
                                                                                 C O N V _ O U T _ C H ,   C O N V _ K E R _ D I M ,   2 ,   1 ,   c o n v _ b i a s _ q 7 ,   1 ,   7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,  
                                                                                 C O N V _ O U T _ D I M ,   c o n v _ b u f ,   N U L L ) ;  
  
         v e r i f y _ r e s u l t s _ q 7 ( c o n v _ i m _ o u t _ r e f _ q 7 ,   c o n v _ i m _ o u t _ o p t _ q 7 ,   C O N V _ O U T _ D I M   *   C O N V _ O U T _ D I M   *   C O N V _ O U T _ C H ) ;  
  
         d e l e t e [ ] t e s t 1 ;  
         d e l e t e [ ] t e s t 2 ;  
         d e l e t e [ ] t e s t 3 ;  
         d e l e t e [ ] t e s t 4 ;  
  
 # e n d i f  
  
         t e s t _ p a s s   =   t r u e ;  
         t e s t _ i n d e x   =   0 ;  
         w h i l e   ( t e s t _ f l a g s [ t e s t _ i n d e x ]   ! =   - 1 )   {  
                 i f   ( t e s t _ f l a g s [ t e s t _ i n d e x ] )   {  
                           t e s t _ p a s s   =   f a l s e ;  
                 }  
                 t e s t _ i n d e x   + + ;  
         }  
         i f   ( t e s t _ p a s s )   {  
                 p r i n t f ( " A l l   t e s t s   p a s s e d \ n " ) ;  
         }   e l s e   {  
                 p r i n t f ( " T e s t   f a i l e d   p a s s e d \ n " ) ;  
         }  
  
         r e t u r n   0 ;  
 }  