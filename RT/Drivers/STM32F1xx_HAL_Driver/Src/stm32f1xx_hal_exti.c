??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ e x t i . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       E X T I   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   E x t e n d e d   I n t e r r u p t s   a n d   e v e n t s   c o n t r o l l e r   ( E X T I )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                         # # # # #   E X T I   P e r i p h e r a l   f e a t u r e s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( + )   E a c h   E x t i   l i n e   c a n   b e   c o n f i g u r e d   w i t h i n   t h i s   d r i v e r .  
  
         ( + )   E x t i   l i n e   c a n   b e   c o n f i g u r e d   i n   3   d i f f e r e n t   m o d e s  
                 ( + + )   I n t e r r u p t  
                 ( + + )   E v e n t  
                 ( + + )   B o t h   o f   t h e m  
  
         ( + )   C o n f i g u r a b l e   E x t i   l i n e s   c a n   b e   c o n f i g u r e d   w i t h   3   d i f f e r e n t   t r i g g e r s  
                 ( + + )   R i s i n g  
                 ( + + )   F a l l i n g  
                 ( + + )   B o t h   o f   t h e m  
  
         ( + )   W h e n   s e t   i n   i n t e r r u p t   m o d e ,   c o n f i g u r a b l e   E x t i   l i n e s   h a v e   t w o   d i f f e r e n t  
                 i n t e r r u p t s   p e n d i n g   r e g i s t e r s   w h i c h   a l l o w   t o   d i s t i n g u i s h   w h i c h   t r a n s i t i o n  
                 o c c u r s :  
                 ( + + )   R i s i n g   e d g e   p e n d i n g   i n t e r r u p t  
                 ( + + )   F a l l i n g  
  
         ( + )   E x t i   l i n e s   0   t o   1 5   a r e   l i n k e d   t o   g p i o   p i n   n u m b e r   0   t o   1 5 .   G p i o   p o r t   c a n  
                 b e   s e l e c t e d   t h r o u g h   m u l t i p l e x e r .  
  
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
  
         ( # )   C o n f i g u r e   t h e   E X T I   l i n e   u s i n g   H A L _ E X T I _ S e t C o n f i g L i n e ( ) .  
                 ( + + )   C h o o s e   t h e   i n t e r r u p t   l i n e   n u m b e r   b y   s e t t i n g   " L i n e "   m e m b e r   f r o m  
                           E X T I _ C o n f i g T y p e D e f   s t r u c t u r e .  
                 ( + + )   C o n f i g u r e   t h e   i n t e r r u p t   a n d / o r   e v e n t   m o d e   u s i n g   " M o d e "   m e m b e r   f r o m  
                           E X T I _ C o n f i g T y p e D e f   s t r u c t u r e .  
                 ( + + )   F o r   c o n f i g u r a b l e   l i n e s ,   c o n f i g u r e   r i s i n g   a n d / o r   f a l l i n g   t r i g g e r  
                           " T r i g g e r "   m e m b e r   f r o m   E X T I _ C o n f i g T y p e D e f   s t r u c t u r e .  
                 ( + + )   F o r   E x t i   l i n e s   l i n k e d   t o   g p i o ,   c h o o s e   g p i o   p o r t   u s i n g   " G P I O S e l "  
                           m e m b e r   f r o m   G P I O _ I n i t T y p e D e f   s t r u c t u r e .  
  
         ( # )   G e t   c u r r e n t   E x t i   c o n f i g u r a t i o n   o f   a   d e d i c a t e d   l i n e   u s i n g  
                 H A L _ E X T I _ G e t C o n f i g L i n e ( ) .  
                 ( + + )   P r o v i d e   e x i t i n g   h a n d l e   a s   p a r a m e t e r .  
                 ( + + )   P r o v i d e   p o i n t e r   o n   E X T I _ C o n f i g T y p e D e f   s t r u c t u r e   a s   s e c o n d   p a r a m e t e r .  
  
         ( # )   C l e a r   E x t i   c o n f i g u r a t i o n   o f   a   d e d i c a t e d   l i n e   u s i n g   H A L _ E X T I _ G e t C o n f i g L i n e ( ) .  
                 ( + + )   P r o v i d e   e x i t i n g   h a n d l e   a s   p a r a m e t e r .  
  
         ( # )   R e g i s t e r   c a l l b a c k   t o   t r e a t   E x t i   i n t e r r u p t s   u s i n g   H A L _ E X T I _ R e g i s t e r C a l l b a c k ( ) .  
                 ( + + )   P r o v i d e   e x i t i n g   h a n d l e   a s   f i r s t   p a r a m e t e r .  
                 ( + + )   P r o v i d e   w h i c h   c a l l b a c k   w i l l   b e   r e g i s t e r e d   u s i n g   o n e   v a l u e   f r o m  
                           E X T I _ C a l l b a c k I D T y p e D e f .  
                 ( + + )   P r o v i d e   c a l l b a c k   f u n c t i o n   p o i n t e r .  
  
         ( # )   G e t   i n t e r r u p t   p e n d i n g   b i t   u s i n g   H A L _ E X T I _ G e t P e n d i n g ( ) .  
  
         ( # )   C l e a r   i n t e r r u p t   p e n d i n g   b i t   u s i n g   H A L _ E X T I _ G e t P e n d i n g ( ) .  
  
         ( # )   G e n e r a t e   s o f t w a r e   i n t e r r u p t   u s i n g   H A L _ E X T I _ G e n e r a t e S W I ( ) .  
  
     @ e n d v e r b a t i m  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 9   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   E X T I  
     *   @ {  
     * /  
 / * *   M I S R A   C : 2 0 1 2   d e v i a t i o n   r u l e   h a s   b e e n   g r a n t e d   f o r   f o l l o w i n g   r u l e :  
     *   R u l e - 1 8 . 1 _ b   -   M e d i u m :   A r r a y   ` E X T I C R '   1 s t   s u b s c r i p t   i n t e r v a l   [ 0 , 7 ]   m a y   b e   o u t  
     *   o f   b o u n d s   [ 0 , 3 ]   i n   f o l l o w i n g   A P I   :  
     *   H A L _ E X T I _ S e t C o n f i g L i n e  
     *   H A L _ E X T I _ G e t C o n f i g L i n e  
     *   H A L _ E X T I _ C l e a r C o n f i g L i n e  
     * /  
  
 # i f d e f   H A L _ E X T I _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   E X T I _ P r i v a t e _ C o n s t a n t s   E X T I   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ a d d t o g r o u p   E X T I _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   E X T I _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *     @ b r i e f         C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   C o n f i g u r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   c o n f i g u r a t i o n   o f   a   d e d i c a t e d   E x t i   l i n e .  
     *   @ p a r a m     h e x t i   E x t i   h a n d l e .  
     *   @ p a r a m     p E x t i C o n f i g   P o i n t e r   o n   E X T I   c o n f i g u r a t i o n   t o   b e   s e t .  
     *   @ r e t v a l   H A L   S t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E X T I _ S e t C o n f i g L i n e ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   E X T I _ C o n f i g T y p e D e f   * p E x t i C o n f i g )  
 {  
     u i n t 3 2 _ t   r e g v a l ;  
     u i n t 3 2 _ t   l i n e p o s ;  
     u i n t 3 2 _ t   m a s k l i n e ;  
  
     / *   C h e c k   n u l l   p o i n t e r   * /  
     i f   ( ( h e x t i   = =   N U L L )   | |   ( p E x t i C o n f i g   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ E X T I _ L I N E ( p E x t i C o n f i g - > L i n e ) ) ;  
     a s s e r t _ p a r a m ( I S _ E X T I _ M O D E ( p E x t i C o n f i g - > M o d e ) ) ;  
  
     / *   A s s i g n   l i n e   n u m b e r   t o   h a n d l e   * /  
     h e x t i - > L i n e   =   p E x t i C o n f i g - > L i n e ;  
  
     / *   C o m p u t e   l i n e   m a s k   * /  
     l i n e p o s   =   ( p E x t i C o n f i g - > L i n e   &   E X T I _ P I N _ M A S K ) ;  
     m a s k l i n e   =   ( 1 u L   < <   l i n e p o s ) ;  
  
     / *   C o n f i g u r e   t r i g g e r s   f o r   c o n f i g u r a b l e   l i n e s   * /  
     i f   ( ( p E x t i C o n f i g - > L i n e   &   E X T I _ C O N F I G )   ! =   0 x 0 0 u )  
     {  
         a s s e r t _ p a r a m ( I S _ E X T I _ T R I G G E R ( p E x t i C o n f i g - > T r i g g e r ) ) ;  
  
         / *   C o n f i g u r e   r i s i n g   t r i g g e r   * /  
         / *   M a s k   o r   s e t   l i n e   * /  
         i f   ( ( p E x t i C o n f i g - > T r i g g e r   &   E X T I _ T R I G G E R _ R I S I N G )   ! =   0 x 0 0 u )  
         {  
             E X T I - > R T S R   | =   m a s k l i n e ;  
         }  
         e l s e  
         {  
             E X T I - > R T S R   & =   ~ m a s k l i n e ;  
         }  
  
         / *   C o n f i g u r e   f a l l i n g   t r i g g e r   * /  
         / *   M a s k   o r   s e t   l i n e   * /  
         i f   ( ( p E x t i C o n f i g - > T r i g g e r   &   E X T I _ T R I G G E R _ F A L L I N G )   ! =   0 x 0 0 u )  
         {  
             E X T I - > F T S R   | =   m a s k l i n e ;  
         }  
         e l s e  
         {  
             E X T I - > F T S R   & =   ~ m a s k l i n e ;  
         }  
  
  
         / *   C o n f i g u r e   g p i o   p o r t   s e l e c t i o n   i n   c a s e   o f   g p i o   e x t i   l i n e   * /  
         i f   ( ( p E x t i C o n f i g - > L i n e   &   E X T I _ G P I O )   = =   E X T I _ G P I O )  
         {  
             a s s e r t _ p a r a m ( I S _ E X T I _ G P I O _ P O R T ( p E x t i C o n f i g - > G P I O S e l ) ) ;  
             a s s e r t _ p a r a m ( I S _ E X T I _ G P I O _ P I N ( l i n e p o s ) ) ;  
              
             r e g v a l   =   A F I O - > E X T I C R [ l i n e p o s   > >   2 u ] ;  
             r e g v a l   & =   ~ ( A F I O _ E X T I C R 1 _ E X T I 0   < <   ( A F I O _ E X T I C R 1 _ E X T I 1 _ P o s   *   ( l i n e p o s   &   0 x 0 3 u ) ) ) ;  
             r e g v a l   | =   ( p E x t i C o n f i g - > G P I O S e l   < <   ( A F I O _ E X T I C R 1 _ E X T I 1 _ P o s   *   ( l i n e p o s   &   0 x 0 3 u ) ) ) ;  
             A F I O - > E X T I C R [ l i n e p o s   > >   2 u ]   =   r e g v a l ;  
         }  
     }  
  
     / *   C o n f i g u r e   i n t e r r u p t   m o d e   :   r e a d   c u r r e n t   m o d e   * /  
     / *   M a s k   o r   s e t   l i n e   * /  
     i f   ( ( p E x t i C o n f i g - > M o d e   &   E X T I _ M O D E _ I N T E R R U P T )   ! =   0 x 0 0 u )  
     {  
         E X T I - > I M R   | =   m a s k l i n e ;  
     }  
     e l s e  
     {  
         E X T I - > I M R   & =   ~ m a s k l i n e ;  
     }  
  
     / *   C o n f i g u r e   e v e n t   m o d e   :   r e a d   c u r r e n t   m o d e   * /  
     / *   M a s k   o r   s e t   l i n e   * /  
     i f   ( ( p E x t i C o n f i g - > M o d e   &   E X T I _ M O D E _ E V E N T )   ! =   0 x 0 0 u )  
     {  
         E X T I - > E M R   | =   m a s k l i n e ;  
     }  
     e l s e  
     {  
         E X T I - > E M R   & =   ~ m a s k l i n e ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   c o n f i g u r a t i o n   o f   a   d e d i c a t e d   E x t i   l i n e .  
     *   @ p a r a m     h e x t i   E x t i   h a n d l e .  
     *   @ p a r a m     p E x t i C o n f i g   P o i n t e r   o n   s t r u c t u r e   t o   s t o r e   E x t i   c o n f i g u r a t i o n .  
     *   @ r e t v a l   H A L   S t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E X T I _ G e t C o n f i g L i n e ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   E X T I _ C o n f i g T y p e D e f   * p E x t i C o n f i g )  
 {  
     u i n t 3 2 _ t   r e g v a l ;  
     u i n t 3 2 _ t   l i n e p o s ;  
     u i n t 3 2 _ t   m a s k l i n e ;  
  
     / *   C h e c k   n u l l   p o i n t e r   * /  
     i f   ( ( h e x t i   = =   N U L L )   | |   ( p E x t i C o n f i g   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ E X T I _ L I N E ( h e x t i - > L i n e ) ) ;  
  
     / *   S t o r e   h a n d l e   l i n e   n u m b e r   t o   c o n f i g u r a t i o n   s t r u c t u r e   * /  
     p E x t i C o n f i g - > L i n e   =   h e x t i - > L i n e ;  
  
     / *   C o m p u t e   l i n e   m a s k   * /  
     l i n e p o s   =   ( p E x t i C o n f i g - > L i n e   &   E X T I _ P I N _ M A S K ) ;  
     m a s k l i n e   =   ( 1 u L   < <   l i n e p o s ) ;  
  
     / *   1 ]   G e t   c o r e   m o d e   :   i n t e r r u p t   * /  
  
     / *   C h e c k   i f   s e l e c t e d   l i n e   i s   e n a b l e   * /  
     i f   ( ( E X T I - > I M R   &   m a s k l i n e )   ! =   0 x 0 0 u )  
     {  
         p E x t i C o n f i g - > M o d e   =   E X T I _ M O D E _ I N T E R R U P T ;  
     }  
     e l s e  
     {  
         p E x t i C o n f i g - > M o d e   =   E X T I _ M O D E _ N O N E ;  
     }  
  
     / *   G e t   e v e n t   m o d e   * /  
     / *   C h e c k   i f   s e l e c t e d   l i n e   i s   e n a b l e   * /  
     i f   ( ( E X T I - > E M R   &   m a s k l i n e )   ! =   0 x 0 0 u )  
     {  
         p E x t i C o n f i g - > M o d e   | =   E X T I _ M O D E _ E V E N T ;  
     }  
  
     / *   G e t   d e f a u l t   T r i g g e r   a n d   G P I O S e l   c o n f i g u r a t i o n   * /  
     p E x t i C o n f i g - > T r i g g e r   =   E X T I _ T R I G G E R _ N O N E ;  
     p E x t i C o n f i g - > G P I O S e l   =   0 x 0 0 u ;  
  
     / *   2 ]   G e t   t r i g g e r   f o r   c o n f i g u r a b l e   l i n e s   :   r i s i n g   * /  
     i f   ( ( p E x t i C o n f i g - > L i n e   &   E X T I _ C O N F I G )   ! =   0 x 0 0 u )  
     {  
         / *   C h e c k   i f   c o n f i g u r a t i o n   o f   s e l e c t e d   l i n e   i s   e n a b l e   * /  
         i f   ( ( E X T I - > R T S R   &   m a s k l i n e )   ! =   0 x 0 0 u )  
         {  
             p E x t i C o n f i g - > T r i g g e r   =   E X T I _ T R I G G E R _ R I S I N G ;  
         }  
  
         / *   G e t   f a l l i n g   c o n f i g u r a t i o n   * /  
         / *   C h e c k   i f   c o n f i g u r a t i o n   o f   s e l e c t e d   l i n e   i s   e n a b l e   * /  
         i f   ( ( E X T I - > F T S R   &   m a s k l i n e )   ! =   0 x 0 0 u )  
         {  
             p E x t i C o n f i g - > T r i g g e r   | =   E X T I _ T R I G G E R _ F A L L I N G ;  
         }  
  
         / *   G e t   G p i o   p o r t   s e l e c t i o n   f o r   g p i o   l i n e s   * /  
         i f   ( ( p E x t i C o n f i g - > L i n e   &   E X T I _ G P I O )   = =   E X T I _ G P I O )  
         {  
             a s s e r t _ p a r a m ( I S _ E X T I _ G P I O _ P I N ( l i n e p o s ) ) ;  
  
             r e g v a l   =   A F I O - > E X T I C R [ l i n e p o s   > >   2 u ] ;  
             p E x t i C o n f i g - > G P I O S e l   =   ( ( r e g v a l   < <   ( A F I O _ E X T I C R 1 _ E X T I 1 _ P o s   *   ( 3 u L   -   ( l i n e p o s   &   0 x 0 3 u ) ) ) )   > >   2 4 ) ;  
         }  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   w h o l e   c o n f i g u r a t i o n   o f   a   d e d i c a t e d   E x t i   l i n e .  
     *   @ p a r a m     h e x t i   E x t i   h a n d l e .  
     *   @ r e t v a l   H A L   S t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E X T I _ C l e a r C o n f i g L i n e ( E X T I _ H a n d l e T y p e D e f   * h e x t i )  
 {  
     u i n t 3 2 _ t   r e g v a l ;  
     u i n t 3 2 _ t   l i n e p o s ;  
     u i n t 3 2 _ t   m a s k l i n e ;  
  
     / *   C h e c k   n u l l   p o i n t e r   * /  
     i f   ( h e x t i   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ E X T I _ L I N E ( h e x t i - > L i n e ) ) ;  
  
     / *   c o m p u t e   l i n e   m a s k   * /  
     l i n e p o s   =   ( h e x t i - > L i n e   &   E X T I _ P I N _ M A S K ) ;  
     m a s k l i n e   =   ( 1 u L   < <   l i n e p o s ) ;  
  
     / *   1 ]   C l e a r   i n t e r r u p t   m o d e   * /  
     E X T I - > I M R   =   ( E X T I - > I M R   &   ~ m a s k l i n e ) ;  
  
     / *   2 ]   C l e a r   e v e n t   m o d e   * /  
     E X T I - > E M R   =   ( E X T I - > E M R   &   ~ m a s k l i n e ) ;  
  
     / *   3 ]   C l e a r   t r i g g e r s   i n   c a s e   o f   c o n f i g u r a b l e   l i n e s   * /  
     i f   ( ( h e x t i - > L i n e   &   E X T I _ C O N F I G )   ! =   0 x 0 0 u )  
     {  
         E X T I - > R T S R   =   ( E X T I - > R T S R   &   ~ m a s k l i n e ) ;  
         E X T I - > F T S R   =   ( E X T I - > F T S R   &   ~ m a s k l i n e ) ;  
  
         / *   G e t   G p i o   p o r t   s e l e c t i o n   f o r   g p i o   l i n e s   * /  
         i f   ( ( h e x t i - > L i n e   &   E X T I _ G P I O )   = =   E X T I _ G P I O )  
         {  
             a s s e r t _ p a r a m ( I S _ E X T I _ G P I O _ P I N ( l i n e p o s ) ) ;  
  
             r e g v a l   =   A F I O - > E X T I C R [ l i n e p o s   > >   2 u ] ;  
             r e g v a l   & =   ~ ( A F I O _ E X T I C R 1 _ E X T I 0   < <   ( A F I O _ E X T I C R 1 _ E X T I 1 _ P o s   *   ( l i n e p o s   &   0 x 0 3 u ) ) ) ;  
             A F I O - > E X T I C R [ l i n e p o s   > >   2 u ]   =   r e g v a l ;  
         }  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e g i s t e r   c a l l b a c k   f o r   a   d e d i c a t e d   E x t i   l i n e .  
     *   @ p a r a m     h e x t i   E x t i   h a n d l e .  
     *   @ p a r a m     C a l l b a c k I D   U s e r   c a l l b a c k   i d e n t i f i e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   @ a r g   @ r e f   E X T I _ C a l l b a c k I D T y p e D e f   v a l u e s .  
     *   @ p a r a m     p P e n d i n g C b f n   f u n c t i o n   p o i n t e r   t o   b e   s t o r e d   a s   c a l l b a c k .  
     *   @ r e t v a l   H A L   S t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E X T I _ R e g i s t e r C a l l b a c k ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   E X T I _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   v o i d   ( * p P e n d i n g C b f n ) ( v o i d ) )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     s w i t c h   ( C a l l b a c k I D )  
     {  
         c a s e     H A L _ E X T I _ C O M M O N _ C B _ I D :  
             h e x t i - > P e n d i n g C a l l b a c k   =   p P e n d i n g C b f n ;  
             b r e a k ;  
  
         d e f a u l t :  
             s t a t u s   =   H A L _ E R R O R ;  
             b r e a k ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o r e   l i n e   n u m b e r   a s   h a n d l e   p r i v a t e   f i e l d .  
     *   @ p a r a m     h e x t i   E x t i   h a n d l e .  
     *   @ p a r a m     E x t i L i n e   E x t i   l i n e   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   f r o m   0   t o   @ r e f   E X T I _ L I N E _ N B .  
     *   @ r e t v a l   H A L   S t a t u s .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E X T I _ G e t H a n d l e ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   u i n t 3 2 _ t   E x t i L i n e )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ E X T I _ L I N E ( E x t i L i n e ) ) ;  
  
     / *   C h e c k   n u l l   p o i n t e r   * /  
     i f   ( h e x t i   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         / *   S t o r e   l i n e   n u m b e r   a s   h a n d l e   p r i v a t e   f i e l d   * /  
         h e x t i - > L i n e   =   E x t i L i n e ;  
  
         r e t u r n   H A L _ O K ;  
     }  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   E X T I _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *     @ b r i e f   E X T I   I O   f u n c t i o n s .  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                               # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     H a n d l e   E X T I   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h e x t i   E x t i   h a n d l e .  
     *   @ r e t v a l   n o n e .  
     * /  
 v o i d   H A L _ E X T I _ I R Q H a n d l e r ( E X T I _ H a n d l e T y p e D e f   * h e x t i )  
 {  
     u i n t 3 2 _ t   r e g v a l ;  
     u i n t 3 2 _ t   m a s k l i n e ;  
  
     / *   C o m p u t e   l i n e   m a s k   * /  
     m a s k l i n e   =   ( 1 u L   < <   ( h e x t i - > L i n e   &   E X T I _ P I N _ M A S K ) ) ;  
  
     / *   G e t   p e n d i n g   b i t     * /  
     r e g v a l   =   ( E X T I - > P R   &   m a s k l i n e ) ;  
     i f   ( r e g v a l   ! =   0 x 0 0 u )  
     {  
         / *   C l e a r   p e n d i n g   b i t   * /  
         E X T I - > P R   =   m a s k l i n e ;  
  
         / *   C a l l   c a l l b a c k   * /  
         i f   ( h e x t i - > P e n d i n g C a l l b a c k   ! =   N U L L )  
         {  
             h e x t i - > P e n d i n g C a l l b a c k ( ) ;  
         }  
     }  
 }  
  
 / * *  
     *   @ b r i e f     G e t   i n t e r r u p t   p e n d i n g   b i t   o f   a   d e d i c a t e d   l i n e .  
     *   @ p a r a m     h e x t i   E x t i   h a n d l e .  
     *   @ p a r a m     E d g e   S p e c i f y   w h i c h   p e n d i n g   e d g e   a s   t o   b e   c h e c k e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   E X T I _ T R I G G E R _ R I S I N G _ F A L L I N G  
     *                   T h i s   p a r a m e t e r   i s   k e p t   f o r   c o m p a t i b i l i t y   w i t h   o t h e r   s e r i e s .  
     *   @ r e t v a l   1   i f   i n t e r r u p t   i s   p e n d i n g   e l s e   0 .  
     * /  
 u i n t 3 2 _ t   H A L _ E X T I _ G e t P e n d i n g ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   u i n t 3 2 _ t   E d g e )  
 {  
     u i n t 3 2 _ t   r e g v a l ;  
     u i n t 3 2 _ t   m a s k l i n e ;  
     u i n t 3 2 _ t   l i n e p o s ;  
  
     / *   C h e c k   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ E X T I _ L I N E ( h e x t i - > L i n e ) ) ;  
     a s s e r t _ p a r a m ( I S _ E X T I _ C O N F I G _ L I N E ( h e x t i - > L i n e ) ) ;  
     a s s e r t _ p a r a m ( I S _ E X T I _ P E N D I N G _ E D G E ( E d g e ) ) ;  
  
     / *   P r e v e n t   u n u s e d   a r g u m e n t   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( E d g e ) ;  
  
     / *   C o m p u t e   l i n e   m a s k   * /  
     l i n e p o s   =   ( h e x t i - > L i n e   &   E X T I _ P I N _ M A S K ) ;  
     m a s k l i n e   =   ( 1 u L   < <   l i n e p o s ) ;  
  
     / *   r e t u r n   1   i f   b i t   i s   s e t   e l s e   0   * /  
     r e g v a l   =   ( ( E X T I - > P R   &   m a s k l i n e )   > >   l i n e p o s ) ;  
     r e t u r n   r e g v a l ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   i n t e r r u p t   p e n d i n g   b i t   o f   a   d e d i c a t e d   l i n e .  
     *   @ p a r a m     h e x t i   E x t i   h a n d l e .  
     *   @ p a r a m     E d g e   S p e c i f y   w h i c h   p e n d i n g   e d g e   a s   t o   b e   c l e a r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   E X T I _ T R I G G E R _ R I S I N G _ F A L L I N G  
     *                   T h i s   p a r a m e t e r   i s   k e p t   f o r   c o m p a t i b i l i t y   w i t h   o t h e r   s e r i e s .  
     *   @ r e t v a l   N o n e .  
     * /  
 v o i d   H A L _ E X T I _ C l e a r P e n d i n g ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   u i n t 3 2 _ t   E d g e )  
 {  
     u i n t 3 2 _ t   m a s k l i n e ;  
  
     / *   C h e c k   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ E X T I _ L I N E ( h e x t i - > L i n e ) ) ;  
     a s s e r t _ p a r a m ( I S _ E X T I _ C O N F I G _ L I N E ( h e x t i - > L i n e ) ) ;  
     a s s e r t _ p a r a m ( I S _ E X T I _ P E N D I N G _ E D G E ( E d g e ) ) ;  
  
     / *   P r e v e n t   u n u s e d   a r g u m e n t   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( E d g e ) ;  
  
     / *   C o m p u t e   l i n e   m a s k   * /  
     m a s k l i n e   =   ( 1 u L   < <   ( h e x t i - > L i n e   &   E X T I _ P I N _ M A S K ) ) ;  
  
     / *   C l e a r   P e n d i n g   b i t   * /  
     E X T I - > P R   =     m a s k l i n e ;  
 }  
  
 / * *  
     *   @ b r i e f     G e n e r a t e   a   s o f t w a r e   i n t e r r u p t   f o r   a   d e d i c a t e d   l i n e .  
     *   @ p a r a m     h e x t i   E x t i   h a n d l e .  
     *   @ r e t v a l   N o n e .  
     * /  
 v o i d   H A L _ E X T I _ G e n e r a t e S W I ( E X T I _ H a n d l e T y p e D e f   * h e x t i )  
 {  
     u i n t 3 2 _ t   m a s k l i n e ;  
  
     / *   C h e c k   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ E X T I _ L I N E ( h e x t i - > L i n e ) ) ;  
     a s s e r t _ p a r a m ( I S _ E X T I _ C O N F I G _ L I N E ( h e x t i - > L i n e ) ) ;  
  
     / *   C o m p u t e   l i n e   m a s k   * /  
     m a s k l i n e   =   ( 1 u L   < <   ( h e x t i - > L i n e   &   E X T I _ P I N _ M A S K ) ) ;  
  
     / *   G e n e r a t e   S o f t w a r e   i n t e r r u p t   * /  
     E X T I - > S W I E R   =   m a s k l i n e ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ E X T I _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  