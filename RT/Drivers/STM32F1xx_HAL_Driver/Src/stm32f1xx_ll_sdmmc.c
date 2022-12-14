??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ s d m m c . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       S D M M C   L o w   L a y e r   H A L   m o d u l e   d r i v e r .  
     *          
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g    
     *                     f u n c t i o n a l i t i e s   o f   t h e   S D M M C   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I / O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s    
     *                       +   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *                    
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                               # # # # #   S D M M C   p e r i p h e r a l   f e a t u r e s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =                  
         [ . . ]   T h e   S D / S D M M C   M M C   c a r d   h o s t   i n t e r f a c e   ( S D M M C )   p r o v i d e s   a n   i n t e r f a c e   b e t w e e n   t h e   A H B  
                   p e r i p h e r a l   b u s   a n d   M u l t i M e d i a   c a r d s   ( M M C s ) ,   S D   m e m o r y   c a r d s ,   S D M M C   c a r d s   a n d   C E - A T A  
                   d e v i c e s .  
          
         [ . . ]   T h e   S D M M C   f e a t u r e s   i n c l u d e   t h e   f o l l o w i n g :  
                   ( + )   F u l l   c o m p l i a n c e   w i t h   M u l t i M e d i a   C a r d   S y s t e m   S p e c i f i c a t i o n   V e r s i o n   4 . 2 .   C a r d   s u p p o r t  
                           f o r   t h r e e   d i f f e r e n t   d a t a b u s   m o d e s :   1 - b i t   ( d e f a u l t ) ,   4 - b i t   a n d   8 - b i t  
                   ( + )   F u l l   c o m p a t i b i l i t y   w i t h   p r e v i o u s   v e r s i o n s   o f   M u l t i M e d i a   C a r d s   ( f o r w a r d   c o m p a t i b i l i t y )  
                   ( + )   F u l l   c o m p l i a n c e   w i t h   S D   M e m o r y   C a r d   S p e c i f i c a t i o n s   V e r s i o n   2 . 0  
                   ( + )   F u l l   c o m p l i a n c e   w i t h   S D   I / O   C a r d   S p e c i f i c a t i o n   V e r s i o n   2 . 0 :   c a r d   s u p p o r t   f o r   t w o  
                           d i f f e r e n t   d a t a   b u s   m o d e s :   1 - b i t   ( d e f a u l t )   a n d   4 - b i t  
                   ( + )   F u l l   s u p p o r t   o f   t h e   C E - A T A   f e a t u r e s   ( f u l l   c o m p l i a n c e   w i t h   C E - A T A   d i g i t a l   p r o t o c o l  
                           R e v 1 . 1 )  
                   ( + )   D a t a   t r a n s f e r   u p   t o   4 8   M H z   f o r   t h e   8   b i t   m o d e  
                   ( + )   D a t a   a n d   c o m m a n d   o u t p u t   e n a b l e   s i g n a l s   t o   c o n t r o l   e x t e r n a l   b i d i r e c t i o n a l   d r i v e r s  
        
                                                       # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h i s   d r i v e r   i s   a   c o n s i d e r e d   a s   a   d r i v e r   o f   s e r v i c e   f o r   e x t e r n a l   d e v i c e s   d r i v e r s    
             t h a t   i n t e r f a c e s   w i t h   t h e   S D M M C   p e r i p h e r a l .  
             A c c o r d i n g   t o   t h e   d e v i c e   u s e d   ( S D   c a r d /   M M C   c a r d   /   S D M M C   c a r d   . . . ) ,   a   s e t   o f   A P I s    
             i s   u s e d   i n   t h e   d e v i c e ' s   d r i v e r   t o   p e r f o r m   S D M M C   o p e r a t i o n s   a n d   f u n c t i o n a l i t i e s .  
        
             T h i s   d r i v e r   i s   a l m o s t   t r a n s p a r e n t   f o r   t h e   f i n a l   u s e r ,   i t   i s   o n l y   u s e d   t o   i m p l e m e n t   o t h e r  
             f u n c t i o n a l i t i e s   o f   t h e   e x t e r n a l   d e v i c e .  
        
         [ . . ]  
             ( + )   T h e   S D M M C   c l o c k   ( S D M M C C L K   =   4 8   M H z )   i s   c o m i n g   f r o m   a   s p e c i f i c   o u t p u t   ( M S I ,   P L L U S B 1 C L K ,  
                     P L L U S B 2 C L K ) .   B e f o r e   s t a r t   w o r k i n g   w i t h   S D M M C   p e r i p h e r a l   m a k e   s u r e   t h a t   t h e  
                     P L L   i s   w e l l   c o n f i g u r e d .  
                     T h e   S D M M C   p e r i p h e r a l   u s e s   t w o   c l o c k   s i g n a l s :  
                     ( + + )   S D M M C   a d a p t e r   c l o c k   ( S D M M C C L K   =   4 8   M H z )  
                     ( + + )   A P B 2   b u s   c l o c k   ( P C L K 2 )  
                
                     - @ @ -   P C L K 2   a n d   S D M M C _ C K   c l o c k   f r e q u e n c i e s   m u s t   r e s p e c t   t h e   f o l l o w i n g   c o n d i t i o n :  
                               F r e q u e n c y ( P C L K 2 )   > =   ( 3   /   8   x   F r e q u e n c y ( S D M M C _ C K ) )  
      
             ( + )   E n a b l e / D i s a b l e   p e r i p h e r a l   c l o c k   u s i n g   R C C   p e r i p h e r a l   m a c r o s   r e l a t e d   t o   S D M M C  
                     p e r i p h e r a l .  
  
             ( + )   E n a b l e   t h e   P o w e r   O N   S t a t e   u s i n g   t h e   S D I O _ P o w e r S t a t e _ O N ( )    
                     f u n c t i o n   a n d   d i s a b l e   i t   u s i n g   t h e   f u n c t i o n   S D I O _ P o w e r S t a t e _ O F F ( ) .  
                                  
             ( + )   E n a b l e / D i s a b l e   t h e   c l o c k   u s i n g   t h e   _ _ S D I O _ E N A B L E ( ) / _ _ S D I O _ D I S A B L E ( )   m a c r o s .  
      
             ( + )   E n a b l e / D i s a b l e   t h e   p e r i p h e r a l   i n t e r r u p t s   u s i n g   t h e   m a c r o s   _ _ S D I O _ E N A B L E _ I T ( )    
                     a n d   _ _ S D I O _ D I S A B L E _ I T ( )   i f   y o u   n e e d   t o   u s e   i n t e r r u p t   m o d e .    
      
             ( + )   W h e n   u s i n g   t h e   D M A   m o d e    
                     ( + + )   C o n f i g u r e   t h e   D M A   i n   t h e   M S P   l a y e r   o f   t h e   e x t e r n a l   d e v i c e  
                     ( + + )   A c t i v e   t h e   n e e d e d   c h a n n e l   R e q u e s t    
                     ( + + )   E n a b l e   t h e   D M A   u s i n g   _ _ S D I O _ D M A _ E N A B L E ( )   m a c r o   o r   D i s a b l e   i t   u s i n g   t h e   m a c r o  
                               _ _ S D I O _ D M A _ D I S A B L E ( ) .  
      
             ( + )   T o   c o n t r o l   t h e   C P S M   ( C o m m a n d   P a t h   S t a t e   M a c h i n e )   a n d   s e n d    
                     c o m m a n d s   t o   t h e   c a r d   u s e   t h e   S D I O _ S e n d C o m m a n d ( ) ,    
                     S D I O _ G e t C o m m a n d R e s p o n s e ( )   a n d   S D I O _ G e t R e s p o n s e ( )   f u n c t i o n s .   F i r s t ,   u s e r   h a s  
                     t o   f i l l   t h e   c o m m a n d   s t r u c t u r e   ( p o i n t e r   t o   S D I O _ C m d I n i t T y p e D e f )   a c c o r d i n g    
                     t o   t h e   s e l e c t e d   c o m m a n d   t o   b e   s e n t .  
                     T h e   p a r a m e t e r s   t h a t   s h o u l d   b e   f i l l e d   a r e :  
                       ( + + )   C o m m a n d   A r g u m e n t  
                       ( + + )   C o m m a n d   I n d e x  
                       ( + + )   C o m m a n d   R e s p o n s e   t y p e  
                       ( + + )   C o m m a n d   W a i t  
                       ( + + )   C P S M   S t a t u s   ( E n a b l e   o r   D i s a b l e ) .  
      
                     - @ @ -   T o   c h e c k   i f   t h e   c o m m a n d   i s   w e l l   r e c e i v e d ,   r e a d   t h e   S D I O _ C M D R E S P  
                             r e g i s t e r   u s i n g   t h e   S D I O _ G e t C o m m a n d R e s p o n s e ( ) .  
                             T h e   S D M M C   r e s p o n s e s   r e g i s t e r s   ( S D I O _ R E S P 1   t o   S D I O _ R E S P 2 ) ,   u s e   t h e  
                             S D I O _ G e t R e s p o n s e ( )   f u n c t i o n .  
      
             ( + )   T o   c o n t r o l   t h e   D P S M   ( D a t a   P a t h   S t a t e   M a c h i n e )   a n d   s e n d / r e c e i v e    
                       d a t a   t o / f r o m   t h e   c a r d   u s e   t h e   S D I O _ D a t a C o n f i g ( ) ,   S D I O _ G e t D a t a C o u n t e r ( ) ,    
                     S D I O _ R e a d F I F O ( ) ,   S D I O _ W r i t e F I F O ( )   a n d   S D I O _ G e t F I F O C o u n t ( )   f u n c t i o n s .  
      
         * * *   R e a d   O p e r a t i o n s   * * *  
         = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( # )   F i r s t ,   u s e r   h a s   t o   f i l l   t h e   d a t a   s t r u c t u r e   ( p o i n t e r   t o  
                     S D I O _ D a t a I n i t T y p e D e f )   a c c o r d i n g   t o   t h e   s e l e c t e d   d a t a   t y p e   t o   b e   r e c e i v e d .  
                     T h e   p a r a m e t e r s   t h a t   s h o u l d   b e   f i l l e d   a r e :  
                       ( + + )   D a t a   T i m e O u t  
                       ( + + )   D a t a   L e n g t h  
                       ( + + )   D a t a   B l o c k   s i z e  
                       ( + + )   D a t a   T r a n s f e r   d i r e c t i o n :   s h o u l d   b e   f r o m   c a r d   ( T o   S D M M C )  
                       ( + + )   D a t a   T r a n s f e r   m o d e  
                       ( + + )   D P S M   S t a t u s   ( E n a b l e   o r   D i s a b l e )  
                                                                            
             ( # )   C o n f i g u r e   t h e   S D M M C   r e s o u r c e s   t o   r e c e i v e   t h e   d a t a   f r o m   t h e   c a r d  
                     a c c o r d i n g   t o   s e l e c t e d   t r a n s f e r   m o d e   ( R e f e r   t o   S t e p   8 ,   9   a n d   1 0 ) .  
      
             ( # )   S e n d   t h e   s e l e c t e d   R e a d   c o m m a n d   ( r e f e r   t o   s t e p   1 1 ) .  
                                          
             ( # )   U s e   t h e   S D I O   f l a g s / i n t e r r u p t s   t o   c h e c k   t h e   t r a n s f e r   s t a t u s .  
      
         * * *   W r i t e   O p e r a t i o n s   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
           ( # )   F i r s t ,   u s e r   h a s   t o   f i l l   t h e   d a t a   s t r u c t u r e   ( p o i n t e r   t o  
                   S D I O _ D a t a I n i t T y p e D e f )   a c c o r d i n g   t o   t h e   s e l e c t e d   d a t a   t y p e   t o   b e   r e c e i v e d .  
                   T h e   p a r a m e t e r s   t h a t   s h o u l d   b e   f i l l e d   a r e :  
                     ( + + )   D a t a   T i m e O u t  
                     ( + + )   D a t a   L e n g t h  
                     ( + + )   D a t a   B l o c k   s i z e  
                     ( + + )   D a t a   T r a n s f e r   d i r e c t i o n :     s h o u l d   b e   t o   c a r d   ( T o   C A R D )  
                     ( + + )   D a t a   T r a n s f e r   m o d e  
                     ( + + )   D P S M   S t a t u s   ( E n a b l e   o r   D i s a b l e )  
      
           ( # )   C o n f i g u r e   t h e   S D M M C   r e s o u r c e s   t o   s e n d   t h e   d a t a   t o   t h e   c a r d   a c c o r d i n g   t o    
                   s e l e c t e d   t r a n s f e r   m o d e .  
                                            
           ( # )   S e n d   t h e   s e l e c t e d   W r i t e   c o m m a n d .  
                                          
           ( # )   U s e   t h e   S D I O   f l a g s / i n t e r r u p t s   t o   c h e c k   t h e   t r a n s f e r   s t a t u s .  
                
         * * *   C o m m a n d   m a n a g e m e n t   o p e r a t i o n s   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
           ( # )   T h e   c o m m a n d s   u s e d   f o r   R e a d / W r i t e / E r a s e   o p e r a t i o n s   a r e   m a n a g e d   i n    
                   s e p a r a t e   f u n c t i o n s .    
                   E a c h   f u n c t i o n   a l l o w s   t o   s e n d   t h e   n e e d e d   c o m m a n d   w i t h   t h e   r e l a t e d   a r g u m e n t ,  
                   t h e n   c h e c k   t h e   r e s p o n s e .  
                   B y   t h e   s a m e   a p p r o a c h ,   y o u   c o u l d   i m p l e m e n t   a   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
      
     @ e n d v e r b a t i m  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 8   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                               o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /    
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 # i f   d e f i n e d ( S D I O )  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   S D M M C _ L L   S D M M C   L o w   L a y e r  
     *   @ b r i e f   L o w   l a y e r   m o d u l e   f o r   S D  
     *   @ {  
     * /  
  
 # i f   d e f i n e d ( H A L _ S D _ M O D U L E _ E N A B L E D )   | |   d e f i n e d ( H A L _ M M C _ M O D U L E _ E N A B L E D )  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d E r r o r ( S D I O _ T y p e D e f   * S D I O x ) ;  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d R e s p 1 ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 8 _ t   S D _ C M D ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d R e s p 2 ( S D I O _ T y p e D e f   * S D I O x ) ;  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d R e s p 3 ( S D I O _ T y p e D e f   * S D I O x ) ;  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d R e s p 7 ( S D I O _ T y p e D e f   * S D I O x ) ;  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d R e s p 6 ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 8 _ t   S D _ C M D ,   u i n t 1 6 _ t   * p R C A ) ;  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   S D M M C _ L L _ E x p o r t e d _ F u n c t i o n s   S D M M C   L o w   L a y e r   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   H A L _ S D M M C _ L L _ G r o u p 1   I n i t i a l i z a t i o n   d e - i n i t i a l i z a t i o n   f u n c t i o n s    
   *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s    
   *  
 @ v e r b a t i m          
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
    
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   S D M M C   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   S D M M C _ I n i t T y p e D e f   a n d   c r e a t e   t h e   a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D M M C   r e g i s t e r   b a s e  
     *   @ p a r a m     I n i t :   S D M M C   i n i t i a l i z a t i o n   s t r u c t u r e        
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   S D I O _ I n i t ( S D I O _ T y p e D e f   * S D I O x ,   S D I O _ I n i t T y p e D e f   I n i t )  
 {  
     u i n t 3 2 _ t   t m p r e g   =   0 ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S D I O _ A L L _ I N S T A N C E ( S D I O x ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ C L O C K _ E D G E ( I n i t . C l o c k E d g e ) ) ;    
     a s s e r t _ p a r a m ( I S _ S D I O _ C L O C K _ B Y P A S S ( I n i t . C l o c k B y p a s s ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ C L O C K _ P O W E R _ S A V E ( I n i t . C l o c k P o w e r S a v e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ B U S _ W I D E ( I n i t . B u s W i d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ H A R D W A R E _ F L O W _ C O N T R O L ( I n i t . H a r d w a r e F l o w C o n t r o l ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ C L K D I V ( I n i t . C l o c k D i v ) ) ;  
      
     / *   S e t   S D M M C   c o n f i g u r a t i o n   p a r a m e t e r s   * /  
     t m p r e g   | =   ( I n i t . C l o c k E d g e                       | \  
                           I n i t . C l o c k B y p a s s                   | \  
                           I n i t . C l o c k P o w e r S a v e             | \  
                           I n i t . B u s W i d e                           | \  
                           I n i t . H a r d w a r e F l o w C o n t r o l   | \  
                           I n i t . C l o c k D i v  
                           ) ;    
      
     / *   W r i t e   t o   S D M M C   C L K C R   * /  
     M O D I F Y _ R E G ( S D I O x - > C L K C R ,   C L K C R _ C L E A R _ M A S K ,   t m p r e g ) ;      
  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H A L _ S D M M C _ L L _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s    
   *     @ b r i e f       D a t a   t r a n s f e r s   f u n c t i o n s    
   *  
 @ v e r b a t i m        
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I / O   o p e r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   S D M M C   d a t a    
         t r a n s f e r s .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e a d   d a t a   ( w o r d )   f r o m   R x   F I F O   i n   b l o c k i n g   m o d e   ( p o l l i n g )    
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D M M C   r e g i s t e r   b a s e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D I O _ R e a d F I F O ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     / *   R e a d   d a t a   f r o m   R x   F I F O   * /    
     r e t u r n   ( S D I O x - > F I F O ) ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   d a t a   ( w o r d )   t o   T x   F I F O   i n   b l o c k i n g   m o d e   ( p o l l i n g )    
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D M M C   r e g i s t e r   b a s e  
     *   @ p a r a m     p W r i t e D a t a :   p o i n t e r   t o   d a t a   t o   w r i t e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   S D I O _ W r i t e F I F O ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   * p W r i t e D a t a )  
 {    
     / *   W r i t e   d a t a   t o   F I F O   * /    
     S D I O x - > F I F O   =   * p W r i t e D a t a ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H A L _ S D M M C _ L L _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s    
   *     @ b r i e f       m a n a g e m e n t   f u n c t i o n s    
   *  
 @ v e r b a t i m        
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   S D M M C   d a t a    
         t r a n s f e r s .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   S D M M C   P o w e r   s t a t e   t o   O N .    
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D M M C   r e g i s t e r   b a s e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   S D I O _ P o w e r S t a t e _ O N ( S D I O _ T y p e D e f   * S D I O x )  
 {      
     / *   S e t   p o w e r   s t a t e   t o   O N   * /    
     S D I O x - > P O W E R   =   S D I O _ P O W E R _ P W R C T R L ;  
  
     / *   1 m s :   r e q u i r e d   p o w e r   u p   w a i t i n g   t i m e   b e f o r e   s t a r t i n g   t h e   S D   i n i t i a l i z a t i o n  
     s e q u e n c e   * /  
     H A L _ D e l a y ( 2 ) ;  
      
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   S D M M C   P o w e r   s t a t e   t o   O F F .    
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D M M C   r e g i s t e r   b a s e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   S D I O _ P o w e r S t a t e _ O F F ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     / *   S e t   p o w e r   s t a t e   t o   O F F   * /  
     S D I O x - > P O W E R   =   ( u i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 0 0 ;  
      
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   S D M M C   P o w e r   s t a t e .    
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D M M C   r e g i s t e r   b a s e  
     *   @ r e t v a l   P o w e r   s t a t u s   o f   t h e   c o n t r o l l e r .   T h e   r e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e    
     *                   f o l l o w i n g   v a l u e s :  
     *                         -   0 x 0 0 :   P o w e r   O F F  
     *                         -   0 x 0 2 :   P o w e r   U P  
     *                         -   0 x 0 3 :   P o w e r   O N    
     * /  
 u i n t 3 2 _ t   S D I O _ G e t P o w e r S t a t e ( S D I O _ T y p e D e f   * S D I O x )      
 {  
     r e t u r n   ( S D I O x - > P O W E R   &   S D I O _ P O W E R _ P W R C T R L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   S D M M C   c o m m a n d   p a t h   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s   i n  
     *                   S D I O _ C m d I n i t T y p e D e f   s t r u c t u r e   a n d   s e n d   t h e   c o m m a n d    
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D M M C   r e g i s t e r   b a s e  
     *   @ p a r a m     C o m m a n d :   p o i n t e r   t o   a   S D I O _ C m d I n i t T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s    
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   S D M M C   c o m m a n d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   S D I O _ S e n d C o m m a n d ( S D I O _ T y p e D e f   * S D I O x ,   S D I O _ C m d I n i t T y p e D e f   * C o m m a n d )  
 {  
     u i n t 3 2 _ t   t m p r e g   =   0 ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S D I O _ C M D _ I N D E X ( C o m m a n d - > C m d I n d e x ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ R E S P O N S E ( C o m m a n d - > R e s p o n s e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ W A I T ( C o m m a n d - > W a i t F o r I n t e r r u p t ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ C P S M ( C o m m a n d - > C P S M ) ) ;  
  
     / *   S e t   t h e   S D M M C   A r g u m e n t   v a l u e   * /  
     S D I O x - > A R G   =   C o m m a n d - > A r g u m e n t ;  
  
     / *   S e t   S D M M C   c o m m a n d   p a r a m e t e r s   * /  
     t m p r e g   | =   ( u i n t 3 2 _ t ) ( C o m m a n d - > C m d I n d e x                   | \  
                                               C o m m a n d - > R e s p o n s e                   | \  
                                               C o m m a n d - > W a i t F o r I n t e r r u p t   | \  
                                               C o m m a n d - > C P S M ) ;  
      
     / *   W r i t e   t o   S D M M C   C M D   r e g i s t e r   * /  
     M O D I F Y _ R E G ( S D I O x - > C M D ,   C M D _ C L E A R _ M A S K ,   t m p r e g ) ;    
      
     r e t u r n   H A L _ O K ;      
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   c o m m a n d   i n d e x   o f   l a s t   c o m m a n d   f o r   w h i c h   r e s p o n s e   r e c e i v e d  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D M M C   r e g i s t e r   b a s e  
     *   @ r e t v a l   C o m m a n d   i n d e x   o f   t h e   l a s t   c o m m a n d   r e s p o n s e   r e c e i v e d  
     * /  
 u i n t 8 _ t   S D I O _ G e t C o m m a n d R e s p o n s e ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     r e t u r n   ( u i n t 8 _ t ) ( S D I O x - > R E S P C M D ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   r e s p o n s e   r e c e i v e d   f r o m   t h e   c a r d   f o r   t h e   l a s t   c o m m a n d  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D M M C   r e g i s t e r   b a s e          
     *   @ p a r a m     R e s p o n s e :   S p e c i f i e s   t h e   S D M M C   r e s p o n s e   r e g i s t e r .    
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   S D I O _ R E S P 1 :   R e s p o n s e   R e g i s t e r   1  
     *                         @ a r g   S D I O _ R E S P 2 :   R e s p o n s e   R e g i s t e r   2  
     *                         @ a r g   S D I O _ R E S P 3 :   R e s p o n s e   R e g i s t e r   3  
     *                         @ a r g   S D I O _ R E S P 4 :   R e s p o n s e   R e g i s t e r   4      
     *   @ r e t v a l   T h e   C o r r e s p o n d i n g   r e s p o n s e   r e g i s t e r   v a l u e  
     * /  
 u i n t 3 2 _ t   S D I O _ G e t R e s p o n s e ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   R e s p o n s e )  
 {  
     u i n t 3 2 _ t   t m p ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S D I O _ R E S P ( R e s p o n s e ) ) ;  
      
     / *   G e t   t h e   r e s p o n s e   * /  
     t m p   =   ( u i n t 3 2 _ t ) ( & ( S D I O x - > R E S P 1 ) )   +   R e s p o n s e ;  
      
     r e t u r n   ( * ( _ _ I O   u i n t 3 2 _ t   * )   t m p ) ;  
 }      
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   S D M M C   d a t a   p a t h   a c c o r d i n g   t o   t h e   s p e c i f i e d    
     *                   p a r a m e t e r s   i n   t h e   S D I O _ D a t a I n i t T y p e D e f .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e      
     *   @ p a r a m     D a t a   :   p o i n t e r   t o   a   S D I O _ D a t a I n i t T y p e D e f   s t r u c t u r e    
     *                   t h a t   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   S D M M C   d a t a .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   S D I O _ C o n f i g D a t a ( S D I O _ T y p e D e f   * S D I O x ,   S D I O _ D a t a I n i t T y p e D e f *   D a t a )  
 {  
     u i n t 3 2 _ t   t m p r e g   =   0 ;  
      
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S D I O _ D A T A _ L E N G T H ( D a t a - > D a t a L e n g t h ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ B L O C K _ S I Z E ( D a t a - > D a t a B l o c k S i z e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ T R A N S F E R _ D I R ( D a t a - > T r a n s f e r D i r ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ T R A N S F E R _ M O D E ( D a t a - > T r a n s f e r M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ D P S M ( D a t a - > D P S M ) ) ;  
  
     / *   S e t   t h e   S D M M C   D a t a   T i m e O u t   v a l u e   * /  
     S D I O x - > D T I M E R   =   D a t a - > D a t a T i m e O u t ;  
  
     / *   S e t   t h e   S D M M C   D a t a L e n g t h   v a l u e   * /  
     S D I O x - > D L E N   =   D a t a - > D a t a L e n g t h ;  
  
     / *   S e t   t h e   S D M M C   d a t a   c o n f i g u r a t i o n   p a r a m e t e r s   * /  
     t m p r e g   | =   ( u i n t 3 2 _ t ) ( D a t a - > D a t a B l o c k S i z e   | \  
                                               D a t a - > T r a n s f e r D i r       | \  
                                               D a t a - > T r a n s f e r M o d e     | \  
                                               D a t a - > D P S M ) ;  
      
     / *   W r i t e   t o   S D M M C   D C T R L   * /  
     M O D I F Y _ R E G ( S D I O x - > D C T R L ,   D C T R L _ C L E A R _ M A S K ,   t m p r e g ) ;  
  
     r e t u r n   H A L _ O K ;  
  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   n u m b e r   o f   r e m a i n i n g   d a t a   b y t e s   t o   b e   t r a n s f e r r e d .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e  
     *   @ r e t v a l   N u m b e r   o f   r e m a i n i n g   d a t a   b y t e s   t o   b e   t r a n s f e r r e d  
     * /  
 u i n t 3 2 _ t   S D I O _ G e t D a t a C o u n t e r ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     r e t u r n   ( S D I O x - > D C O U N T ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   F I F O   d a t a  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   D a t a   r e c e i v e d  
     * /  
 u i n t 3 2 _ t   S D I O _ G e t F I F O C o u n t ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     r e t u r n   ( S D I O x - > F I F O ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t s   o n e   o f   t h e   t w o   o p t i o n s   o f   i n s e r t i n g   r e a d   w a i t   i n t e r v a l .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e        
     *   @ p a r a m     S D I O _ R e a d W a i t M o d e :   S D M M C   R e a d   W a i t   o p e r a t i o n   m o d e .  
     *                     T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   S D I O _ R E A D _ W A I T _ M O D E _ C L K :   R e a d   W a i t   c o n t r o l   b y   s t o p p i n g   S D M M C C L K  
     *                         @ a r g   S D I O _ R E A D _ W A I T _ M O D E _ D A T A 2 :   R e a d   W a i t   c o n t r o l   u s i n g   S D M M C _ D A T A 2  
     *   @ r e t v a l   N o n e  
     * /  
 H A L _ S t a t u s T y p e D e f   S D I O _ S e t S D M M C R e a d W a i t M o d e ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   S D I O _ R e a d W a i t M o d e )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S D I O _ R E A D W A I T _ M O D E ( S D I O _ R e a d W a i t M o d e ) ) ;  
  
     / *   S e t   S D M M C   r e a d   w a i t   m o d e   * /  
     M O D I F Y _ R E G ( S D I O x - > D C T R L ,   S D I O _ D C T R L _ R W M O D ,   S D I O _ R e a d W a i t M o d e ) ;  
      
     r e t u r n   H A L _ O K ;      
 }  
  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   H A L _ S D M M C _ L L _ G r o u p 4   C o m m a n d   m a n a g e m e n t   f u n c t i o n s    
   *     @ b r i e f       D a t a   t r a n s f e r s   f u n c t i o n s    
   *  
 @ v e r b a t i m        
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                       # # # # #   C o m m a n d s   m a n a g e m e n t   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   n e e d e d   c o m m a n d s .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   D a t a   B l o c k   L e n g t h   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d B l o c k L e n g t h ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   B l o c k S i z e )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /    
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) B l o c k S i z e ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S E T _ B L O C K L E N ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ S E T _ B L O C K L E N ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   R e a d   S i n g l e   B l o c k   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d R e a d S i n g l e B l o c k ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   R e a d A d d )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /    
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) R e a d A d d ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ R E A D _ S I N G L E _ B L O C K ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ R E A D _ S I N G L E _ B L O C K ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   R e a d   M u l t i   B l o c k   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d R e a d M u l t i B l o c k ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   R e a d A d d )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /    
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) R e a d A d d ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ R E A D _ M U L T _ B L O C K ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ R E A D _ M U L T _ B L O C K ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   W r i t e   S i n g l e   B l o c k   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d W r i t e S i n g l e B l o c k ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   W r i t e A d d )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /    
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) W r i t e A d d ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ W R I T E _ S I N G L E _ B L O C K ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ W R I T E _ S I N G L E _ B L O C K ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   W r i t e   M u l t i   B l o c k   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d W r i t e M u l t i B l o c k ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   W r i t e A d d )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /    
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) W r i t e A d d ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ W R I T E _ M U L T _ B L O C K ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ W R I T E _ M U L T _ B L O C K ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   S t a r t   A d d r e s s   E r a s e   c o m m a n d   f o r   S D   a n d   c h e c k   t h e   r e s p o n s e  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S D E r a s e S t a r t A d d ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   S t a r t A d d )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /    
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) S t a r t A d d ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S D _ E R A S E _ G R P _ S T A R T ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ S D _ E R A S E _ G R P _ S T A R T ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   E n d   A d d r e s s   E r a s e   c o m m a n d   f o r   S D   a n d   c h e c k   t h e   r e s p o n s e  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S D E r a s e E n d A d d ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   E n d A d d )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /    
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) E n d A d d ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S D _ E R A S E _ G R P _ E N D ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ S D _ E R A S E _ G R P _ E N D ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   S t a r t   A d d r e s s   E r a s e   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d E r a s e S t a r t A d d ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   S t a r t A d d )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /    
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) S t a r t A d d ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ E R A S E _ G R P _ S T A R T ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ E R A S E _ G R P _ S T A R T ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   E n d   A d d r e s s   E r a s e   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d E r a s e E n d A d d ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   E n d A d d )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /    
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) E n d A d d ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ E R A S E _ G R P _ E N D ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ E R A S E _ G R P _ E N D ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   E r a s e   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d E r a s e ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /    
     s d m m c _ c m d i n i t . A r g u m e n t                   =   0 U ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ E R A S E ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ E R A S E ,   S D I O _ M A X E R A S E T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   S t o p   T r a n s f e r   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S t o p T r a n s f e r ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e n d   C M D 1 2   S T O P _ T R A N S M I S S I O N     * /  
     s d m m c _ c m d i n i t . A r g u m e n t                   =   0 U ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S T O P _ T R A N S M I S S I O N ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ S T O P _ T R A N S M I S S I O N ,   S D I O _ S T O P T R A N S F E R T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   S e l e c t   D e s e l e c t   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ p a r a m     a d d r :   A d d r e s s   o f   t h e   c a r d   t o   b e   s e l e c t e d      
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S e l D e s e l ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 6 4 _ t   A d d r )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e n d   C M D 7   S D M M C _ S E L _ D E S E L _ C A R D   * /  
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) A d d r ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S E L _ D E S E L _ C A R D ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ S E L _ D E S E L _ C A R D ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   G o   I d l e   S t a t e   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d G o I d l e S t a t e ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     s d m m c _ c m d i n i t . A r g u m e n t                   =   0 U ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ G O _ I D L E _ S T A T E ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ N O ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d E r r o r ( S D I O x ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   O p e r a t i n g   C o n d i t i o n   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d O p e r C o n d ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e n d   C M D 8   t o   v e r i f y   S D   c a r d   i n t e r f a c e   o p e r a t i n g   c o n d i t i o n   * /  
     / *   A r g u m e n t :   -   [ 3 1 : 1 2 ] :   R e s e r v e d   ( s h a l l   b e   s e t   t o   ' 0 ' )  
     -   [ 1 1 : 8 ] :   S u p p l y   V o l t a g e   ( V H S )   0 x 1   ( R a n g e :   2 . 7 - 3 . 6   V )  
     -   [ 7 : 0 ] :   C h e c k   P a t t e r n   ( r e c o m m e n d e d   0 x A A )   * /  
     / *   C M D   R e s p o n s e :   R 7   * /  
     s d m m c _ c m d i n i t . A r g u m e n t                   =   S D M M C _ C H E C K _ P A T T E R N ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ H S _ S E N D _ E X T _ C S D ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 7 ( S D I O x ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   A p p l i c a t i o n   c o m m a n d   t o   v e r i f y   t h a t   t h a t   t h e   n e x t   c o m m a n d    
     *                   i s   a n   a p p l i c a t i o n   s p e c i f i c   c o m - m a n d   r a t h e r   t h a n   a   s t a n d a r d   c o m m a n d  
     *                   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ p a r a m     A r g u m e n t :   C o m m a n d   A r g u m e n t    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d A p p C o m m a n d ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   A r g u m e n t )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) A r g u m e n t ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ A P P _ C M D ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     / *   I f   t h e r e   i s   a   H A L _ E R R O R ,   i t   i s   a   M M C   c a r d ,   e l s e  
     i t   i s   a   S D   c a r d :   S D   c a r d   2 . 0   ( v o l t a g e   r a n g e   m i s m a t c h )  
           o r   S D   c a r d   1 . x   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ A P P _ C M D ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   c o m m a n d   a s k i n g   t h e   a c c e s s e d   c a r d   t o   s e n d   i t s   o p e r a t i n g    
     *                   c o n d i t i o n   r e g i s t e r   ( O C R )  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ p a r a m     A r g u m e n t :   C o m m a n d   A r g u m e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d A p p O p e r C o m m a n d ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   A r g u m e n t )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     s d m m c _ c m d i n i t . A r g u m e n t                   =   S D M M C _ V O L T A G E _ W I N D O W _ S D   |   A r g u m e n t ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S D _ A P P _ O P _ C O N D ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 3 ( S D I O x ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   B u s   W i d t h   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ p a r a m     B u s W i d t h :   B u s W i d t h  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d B u s W i d t h ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   B u s W i d t h )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     s d m m c _ c m d i n i t . A r g u m e n t                   =   ( u i n t 3 2 _ t ) B u s W i d t h ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ A P P _ S D _ S E T _ B U S W I D T H ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ A P P _ S D _ S E T _ B U S W I D T H ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   S e n d   S C R   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S e n d S C R ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e n d   C M D 5 1   S D _ A P P _ S E N D _ S C R   * /  
     s d m m c _ c m d i n i t . A r g u m e n t                   =   0 U ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S D _ A P P _ S E N D _ S C R ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ S D _ A P P _ S E N D _ S C R ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   S e n d   C I D   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S e n d C I D ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e n d   C M D 2   A L L _ S E N D _ C I D   * /  
     s d m m c _ c m d i n i t . A r g u m e n t                   =   0 U ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ A L L _ S E N D _ C I D ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ L O N G ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 2 ( S D I O x ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   S e n d   C S D   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ p a r a m     A r g u m e n t :   C o m m a n d   A r g u m e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S e n d C S D ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   A r g u m e n t )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e n d   C M D 9   S E N D _ C S D   * /  
     s d m m c _ c m d i n i t . A r g u m e n t                   =   A r g u m e n t ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S E N D _ C S D ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ L O N G ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 2 ( S D I O x ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   S e n d   C S D   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ p a r a m     p R C A :   C a r d   R C A      
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S e t R e l A d d ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 1 6 _ t   * p R C A )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e n d   C M D 3   S D _ C M D _ S E T _ R E L _ A D D R   * /  
     s d m m c _ c m d i n i t . A r g u m e n t                   =   0 U ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S E T _ R E L _ A D D R ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 6 ( S D I O x ,   S D M M C _ C M D _ S E T _ R E L _ A D D R ,   p R C A ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   S t a t u s   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ p a r a m     A r g u m e n t :   C o m m a n d   A r g u m e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S e n d S t a t u s ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   A r g u m e n t )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     s d m m c _ c m d i n i t . A r g u m e n t                   =   A r g u m e n t ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S E N D _ S T A T U S ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ S E N D _ S T A T U S ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   S t a t u s   r e g i s t e r   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S t a t u s R e g i s t e r ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     s d m m c _ c m d i n i t . A r g u m e n t                   =   0 U ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S D _ A P P _ S T A T U S ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ S D _ A P P _ S T A T U S ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d s   h o s t   c a p a c i t y   s u p p o r t   i n f o r m a t i o n   a n d   a c t i v a t e s   t h e   c a r d ' s    
     *                   i n i t i a l i z a t i o n   p r o c e s s .   S e n d   S D M M C _ C M D _ S E N D _ O P _ C O N D   c o m m a n d  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ p a r a m e   A r g u m e n t :   A r g u m e n t   u s e d   f o r   t h e   c o m m a n d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d O p C o n d i t i o n ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   A r g u m e n t )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     s d m m c _ c m d i n i t . A r g u m e n t                   =   A r g u m e n t ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ S E N D _ O P _ C O N D ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 3 ( S D I O x ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   s w i t c h a b l e   f u n c t i o n   a n d   s w i t c h   c a r d   f u n c t i o n .   S D M M C _ C M D _ H S _ S W I T C H   c o m m a n d  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D I O   r e g i s t e r   b a s e    
     *   @ p a r a m e   A r g u m e n t :   A r g u m e n t   u s e d   f o r   t h e   c o m m a n d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S w i t c h ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   A r g u m e n t )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
      
     / *   S e n d   C M D 6   t o   a c t i v a t e   S D R 5 0   M o d e   a n d   P o w e r   L i m i t   1 . 4 4 W   * /  
     / *   C M D   R e s p o n s e :   R 1   * /  
     s d m m c _ c m d i n i t . A r g u m e n t                   =   A r g u m e n t ;   / *   S D M M C _ S D R 2 5 _ S W I T C H _ P A T T E R N   * /  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ H S _ S W I T C H ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
      
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ H S _ S W I T C H ,   S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   f u n c t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /      
 / * *   @ a d d t o g r o u p   S D _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
          
 / * *  
     *   @ b r i e f     C h e c k s   f o r   e r r o r   c o n d i t i o n s   f o r   C M D 0 .  
     *   @ p a r a m     h s d :   S D   h a n d l e  
     *   @ r e t v a l   S D   C a r d   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d E r r o r ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     / *   8   i s   t h e   n u m b e r   o f   r e q u i r e d   i n s t r u c t i o n s   c y c l e s   f o r   t h e   b e l o w   l o o p   s t a t e m e n t .  
     T h e   S D I O _ C M D T I M E O U T   i s   e x p r e s s e d   i n   m s   * /  
     u i n t 3 2 _ t   c o u n t   =   S D I O _ C M D T I M E O U T   *   ( S y s t e m C o r e C l o c k   /   8 U   / 1 0 0 0 U ) ;  
      
     d o  
     {  
         i f   ( c o u n t - -   = =   0 U )  
         {  
             r e t u r n   S D M M C _ E R R O R _ T I M E O U T ;  
         }  
          
     } w h i l e ( ! _ _ S D I O _ G E T _ F L A G ( S D I O x ,   S D I O _ F L A G _ C M D S E N T ) ) ;  
      
     / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
     _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ S T A T I C _ C M D _ F L A G S ) ;  
      
     r e t u r n   S D M M C _ E R R O R _ N O N E ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   f o r   e r r o r   c o n d i t i o n s   f o r   R 1   r e s p o n s e .  
     *   @ p a r a m     h s d :   S D   h a n d l e  
     *   @ p a r a m     S D _ C M D :   T h e   s e n t   c o m m a n d   i n d e x      
     *   @ r e t v a l   S D   C a r d   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d R e s p 1 ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 8 _ t   S D _ C M D ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 3 2 _ t   r e s p o n s e _ r 1 ;  
     u i n t 3 2 _ t   s t a _ r e g ;  
      
     / *   8   i s   t h e   n u m b e r   o f   r e q u i r e d   i n s t r u c t i o n s   c y c l e s   f o r   t h e   b e l o w   l o o p   s t a t e m e n t .  
     T h e   T i m e o u t   i s   e x p r e s s e d   i n   m s   * /  
     u i n t 3 2 _ t   c o u n t   =   T i m e o u t   *   ( S y s t e m C o r e C l o c k   /   8 U   / 1 0 0 0 U ) ;  
      
     d o  
     {  
         i f   ( c o u n t - -   = =   0 U )  
         {  
             r e t u r n   S D M M C _ E R R O R _ T I M E O U T ;  
         }  
         s t a _ r e g   =   S D I O x - > S T A ;  
     } w h i l e ( ( ( s t a _ r e g   &   ( S D I O _ F L A G _ C C R C F A I L   |   S D I O _ F L A G _ C M D R E N D   |   S D I O _ F L A G _ C T I M E O U T ) )   = =   0 U )   | |  
                   ( ( s t a _ r e g   &   S D I O _ F L A G _ C M D A C T )   ! =   0 U   ) ) ;  
          
     i f ( _ _ S D I O _ G E T _ F L A G ( S D I O x ,   S D I O _ F L A G _ C T I M E O U T ) )  
     {  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ F L A G _ C T I M E O U T ) ;  
          
         r e t u r n   S D M M C _ E R R O R _ C M D _ R S P _ T I M E O U T ;  
     }  
     e l s e   i f ( _ _ S D I O _ G E T _ F L A G ( S D I O x ,   S D I O _ F L A G _ C C R C F A I L ) )  
     {  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ F L A G _ C C R C F A I L ) ;  
          
         r e t u r n   S D M M C _ E R R O R _ C M D _ C R C _ F A I L ;  
     }  
     e l s e  
     {  
         / *   N o t h i n g   t o   d o   * /  
     }  
      
     / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
     _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ S T A T I C _ C M D _ F L A G S ) ;  
      
     / *   C h e c k   r e s p o n s e   r e c e i v e d   i s   o f   d e s i r e d   c o m m a n d   * /  
     i f ( S D I O _ G e t C o m m a n d R e s p o n s e ( S D I O x )   ! =   S D _ C M D )  
     {  
         r e t u r n   S D M M C _ E R R O R _ C M D _ C R C _ F A I L ;  
     }  
      
     / *   W e   h a v e   r e c e i v e d   r e s p o n s e ,   r e t r i e v e   i t   f o r   a n a l y s i s     * /  
     r e s p o n s e _ r 1   =   S D I O _ G e t R e s p o n s e ( S D I O x ,   S D I O _ R E S P 1 ) ;  
      
     i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ E R R O R B I T S )   = =   S D M M C _ A L L Z E R O )  
     {  
         r e t u r n   S D M M C _ E R R O R _ N O N E ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ A D D R _ O U T _ O F _ R A N G E )   = =   S D M M C _ O C R _ A D D R _ O U T _ O F _ R A N G E )  
     {  
         r e t u r n   S D M M C _ E R R O R _ A D D R _ O U T _ O F _ R A N G E ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ A D D R _ M I S A L I G N E D )   = =   S D M M C _ O C R _ A D D R _ M I S A L I G N E D )  
     {  
         r e t u r n   S D M M C _ E R R O R _ A D D R _ M I S A L I G N E D ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ B L O C K _ L E N _ E R R )   = =   S D M M C _ O C R _ B L O C K _ L E N _ E R R )  
     {  
         r e t u r n   S D M M C _ E R R O R _ B L O C K _ L E N _ E R R ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ E R A S E _ S E Q _ E R R )   = =   S D M M C _ O C R _ E R A S E _ S E Q _ E R R )  
     {  
         r e t u r n   S D M M C _ E R R O R _ E R A S E _ S E Q _ E R R ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ B A D _ E R A S E _ P A R A M )   = =   S D M M C _ O C R _ B A D _ E R A S E _ P A R A M )  
     {  
         r e t u r n   S D M M C _ E R R O R _ B A D _ E R A S E _ P A R A M ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ W R I T E _ P R O T _ V I O L A T I O N )   = =   S D M M C _ O C R _ W R I T E _ P R O T _ V I O L A T I O N )  
     {  
         r e t u r n   S D M M C _ E R R O R _ W R I T E _ P R O T _ V I O L A T I O N ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ L O C K _ U N L O C K _ F A I L E D )   = =   S D M M C _ O C R _ L O C K _ U N L O C K _ F A I L E D )  
     {  
         r e t u r n   S D M M C _ E R R O R _ L O C K _ U N L O C K _ F A I L E D ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ C O M _ C R C _ F A I L E D )   = =   S D M M C _ O C R _ C O M _ C R C _ F A I L E D )  
     {  
         r e t u r n   S D M M C _ E R R O R _ C O M _ C R C _ F A I L E D ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ I L L E G A L _ C M D )   = =   S D M M C _ O C R _ I L L E G A L _ C M D )  
     {  
         r e t u r n   S D M M C _ E R R O R _ I L L E G A L _ C M D ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ C A R D _ E C C _ F A I L E D )   = =   S D M M C _ O C R _ C A R D _ E C C _ F A I L E D )  
     {  
         r e t u r n   S D M M C _ E R R O R _ C A R D _ E C C _ F A I L E D ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ C C _ E R R O R )   = =   S D M M C _ O C R _ C C _ E R R O R )  
     {  
         r e t u r n   S D M M C _ E R R O R _ C C _ E R R ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ S T R E A M _ R E A D _ U N D E R R U N )   = =   S D M M C _ O C R _ S T R E A M _ R E A D _ U N D E R R U N )  
     {  
         r e t u r n   S D M M C _ E R R O R _ S T R E A M _ R E A D _ U N D E R R U N ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ S T R E A M _ W R I T E _ O V E R R U N )   = =   S D M M C _ O C R _ S T R E A M _ W R I T E _ O V E R R U N )  
     {  
         r e t u r n   S D M M C _ E R R O R _ S T R E A M _ W R I T E _ O V E R R U N ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ C I D _ C S D _ O V E R W R I T E )   = =   S D M M C _ O C R _ C I D _ C S D _ O V E R W R I T E )  
     {  
         r e t u r n   S D M M C _ E R R O R _ C I D _ C S D _ O V E R W R I T E ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ W P _ E R A S E _ S K I P )   = =   S D M M C _ O C R _ W P _ E R A S E _ S K I P )  
     {  
         r e t u r n   S D M M C _ E R R O R _ W P _ E R A S E _ S K I P ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ C A R D _ E C C _ D I S A B L E D )   = =   S D M M C _ O C R _ C A R D _ E C C _ D I S A B L E D )  
     {  
         r e t u r n   S D M M C _ E R R O R _ C A R D _ E C C _ D I S A B L E D ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ E R A S E _ R E S E T )   = =   S D M M C _ O C R _ E R A S E _ R E S E T )  
     {  
         r e t u r n   S D M M C _ E R R O R _ E R A S E _ R E S E T ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ O C R _ A K E _ S E Q _ E R R O R )   = =   S D M M C _ O C R _ A K E _ S E Q _ E R R O R )  
     {  
         r e t u r n   S D M M C _ E R R O R _ A K E _ S E Q _ E R R ;  
     }  
     e l s e  
     {  
         r e t u r n   S D M M C _ E R R O R _ G E N E R A L _ U N K N O W N _ E R R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   f o r   e r r o r   c o n d i t i o n s   f o r   R 2   ( C I D   o r   C S D )   r e s p o n s e .  
     *   @ p a r a m     h s d :   S D   h a n d l e  
     *   @ r e t v a l   S D   C a r d   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d R e s p 2 ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     u i n t 3 2 _ t   s t a _ r e g ;  
     / *   8   i s   t h e   n u m b e r   o f   r e q u i r e d   i n s t r u c t i o n s   c y c l e s   f o r   t h e   b e l o w   l o o p   s t a t e m e n t .  
     T h e   S D I O _ C M D T I M E O U T   i s   e x p r e s s e d   i n   m s   * /  
     u i n t 3 2 _ t   c o u n t   =   S D I O _ C M D T I M E O U T   *   ( S y s t e m C o r e C l o c k   /   8 U   / 1 0 0 0 U ) ;  
      
     d o  
     {  
         i f   ( c o u n t - -   = =   0 U )  
         {  
             r e t u r n   S D M M C _ E R R O R _ T I M E O U T ;  
         }  
         s t a _ r e g   =   S D I O x - > S T A ;  
     } w h i l e ( ( ( s t a _ r e g   &   ( S D I O _ F L A G _ C C R C F A I L   |   S D I O _ F L A G _ C M D R E N D   |   S D I O _ F L A G _ C T I M E O U T ) )   = =   0 U )   | |  
                   ( ( s t a _ r e g   &   S D I O _ F L A G _ C M D A C T )   ! =   0 U   ) ) ;  
          
     i f   ( _ _ S D I O _ G E T _ F L A G ( S D I O x ,   S D I O _ F L A G _ C T I M E O U T ) )  
     {  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ F L A G _ C T I M E O U T ) ;  
          
         r e t u r n   S D M M C _ E R R O R _ C M D _ R S P _ T I M E O U T ;  
     }  
     e l s e   i f   ( _ _ S D I O _ G E T _ F L A G ( S D I O x ,   S D I O _ F L A G _ C C R C F A I L ) )  
     {  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ F L A G _ C C R C F A I L ) ;  
          
         r e t u r n   S D M M C _ E R R O R _ C M D _ C R C _ F A I L ;  
     }  
     e l s e  
     {  
         / *   N o   e r r o r   f l a g   s e t   * /  
         / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ S T A T I C _ C M D _ F L A G S ) ;  
     }  
  
     r e t u r n   S D M M C _ E R R O R _ N O N E ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   f o r   e r r o r   c o n d i t i o n s   f o r   R 3   ( O C R )   r e s p o n s e .  
     *   @ p a r a m     h s d :   S D   h a n d l e  
     *   @ r e t v a l   S D   C a r d   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d R e s p 3 ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     u i n t 3 2 _ t   s t a _ r e g ;  
     / *   8   i s   t h e   n u m b e r   o f   r e q u i r e d   i n s t r u c t i o n s   c y c l e s   f o r   t h e   b e l o w   l o o p   s t a t e m e n t .  
     T h e   S D I O _ C M D T I M E O U T   i s   e x p r e s s e d   i n   m s   * /  
     u i n t 3 2 _ t   c o u n t   =   S D I O _ C M D T I M E O U T   *   ( S y s t e m C o r e C l o c k   /   8 U   / 1 0 0 0 U ) ;  
      
     d o  
     {  
         i f   ( c o u n t - -   = =   0 U )  
         {  
             r e t u r n   S D M M C _ E R R O R _ T I M E O U T ;  
         }  
         s t a _ r e g   =   S D I O x - > S T A ;  
     } w h i l e ( ( ( s t a _ r e g   &   ( S D I O _ F L A G _ C C R C F A I L   |   S D I O _ F L A G _ C M D R E N D   |   S D I O _ F L A G _ C T I M E O U T ) )   = =   0 U )   | |  
                   ( ( s t a _ r e g   &   S D I O _ F L A G _ C M D A C T )   ! =   0 U   ) ) ;  
          
     i f ( _ _ S D I O _ G E T _ F L A G ( S D I O x ,   S D I O _ F L A G _ C T I M E O U T ) )  
     {  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ F L A G _ C T I M E O U T ) ;  
          
         r e t u r n   S D M M C _ E R R O R _ C M D _ R S P _ T I M E O U T ;  
     }  
     e l s e  
     {      
         / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ S T A T I C _ C M D _ F L A G S ) ;  
     }  
      
     r e t u r n   S D M M C _ E R R O R _ N O N E ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   f o r   e r r o r   c o n d i t i o n s   f o r   R 6   ( R C A )   r e s p o n s e .  
     *   @ p a r a m     h s d :   S D   h a n d l e  
     *   @ p a r a m     S D _ C M D :   T h e   s e n t   c o m m a n d   i n d e x  
     *   @ p a r a m     p R C A :   P o i n t e r   t o   t h e   v a r i a b l e   t h a t   w i l l   c o n t a i n   t h e   S D   c a r d   r e l a t i v e    
     *                   a d d r e s s   R C A        
     *   @ r e t v a l   S D   C a r d   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d R e s p 6 ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 8 _ t   S D _ C M D ,   u i n t 1 6 _ t   * p R C A )  
 {  
     u i n t 3 2 _ t   r e s p o n s e _ r 1 ;  
     u i n t 3 2 _ t   s t a _ r e g ;  
  
     / *   8   i s   t h e   n u m b e r   o f   r e q u i r e d   i n s t r u c t i o n s   c y c l e s   f o r   t h e   b e l o w   l o o p   s t a t e m e n t .  
     T h e   S D I O _ C M D T I M E O U T   i s   e x p r e s s e d   i n   m s   * /  
     u i n t 3 2 _ t   c o u n t   =   S D I O _ C M D T I M E O U T   *   ( S y s t e m C o r e C l o c k   /   8 U   / 1 0 0 0 U ) ;  
      
     d o  
     {  
         i f   ( c o u n t - -   = =   0 U )  
         {  
             r e t u r n   S D M M C _ E R R O R _ T I M E O U T ;  
         }  
         s t a _ r e g   =   S D I O x - > S T A ;  
     } w h i l e ( ( ( s t a _ r e g   &   ( S D I O _ F L A G _ C C R C F A I L   |   S D I O _ F L A G _ C M D R E N D   |   S D I O _ F L A G _ C T I M E O U T ) )   = =   0 U )   | |  
                   ( ( s t a _ r e g   &   S D I O _ F L A G _ C M D A C T )   ! =   0 U   ) ) ;  
          
     i f ( _ _ S D I O _ G E T _ F L A G ( S D I O x ,   S D I O _ F L A G _ C T I M E O U T ) )  
     {  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ F L A G _ C T I M E O U T ) ;  
          
         r e t u r n   S D M M C _ E R R O R _ C M D _ R S P _ T I M E O U T ;  
     }  
     e l s e   i f ( _ _ S D I O _ G E T _ F L A G ( S D I O x ,   S D I O _ F L A G _ C C R C F A I L ) )  
     {  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ F L A G _ C C R C F A I L ) ;  
          
         r e t u r n   S D M M C _ E R R O R _ C M D _ C R C _ F A I L ;  
     }  
     e l s e  
     {  
         / *   N o t h i n g   t o   d o   * /  
     }  
      
     / *   C h e c k   r e s p o n s e   r e c e i v e d   i s   o f   d e s i r e d   c o m m a n d   * /  
     i f ( S D I O _ G e t C o m m a n d R e s p o n s e ( S D I O x )   ! =   S D _ C M D )  
     {  
         r e t u r n   S D M M C _ E R R O R _ C M D _ C R C _ F A I L ;  
     }  
      
     / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
     _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ S T A T I C _ C M D _ F L A G S ) ;  
      
     / *   W e   h a v e   r e c e i v e d   r e s p o n s e ,   r e t r i e v e   i t .     * /  
     r e s p o n s e _ r 1   =   S D I O _ G e t R e s p o n s e ( S D I O x ,   S D I O _ R E S P 1 ) ;  
      
     i f ( ( r e s p o n s e _ r 1   &   ( S D M M C _ R 6 _ G E N E R A L _ U N K N O W N _ E R R O R   |   S D M M C _ R 6 _ I L L E G A L _ C M D   |   S D M M C _ R 6 _ C O M _ C R C _ F A I L E D ) )   = =   S D M M C _ A L L Z E R O )  
     {  
         * p R C A   =   ( u i n t 1 6 _ t )   ( r e s p o n s e _ r 1   > >   1 6 ) ;  
          
         r e t u r n   S D M M C _ E R R O R _ N O N E ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ R 6 _ I L L E G A L _ C M D )   = =   S D M M C _ R 6 _ I L L E G A L _ C M D )  
     {  
         r e t u r n   S D M M C _ E R R O R _ I L L E G A L _ C M D ;  
     }  
     e l s e   i f ( ( r e s p o n s e _ r 1   &   S D M M C _ R 6 _ C O M _ C R C _ F A I L E D )   = =   S D M M C _ R 6 _ C O M _ C R C _ F A I L E D )  
     {  
         r e t u r n   S D M M C _ E R R O R _ C O M _ C R C _ F A I L E D ;  
     }  
     e l s e  
     {  
         r e t u r n   S D M M C _ E R R O R _ G E N E R A L _ U N K N O W N _ E R R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   f o r   e r r o r   c o n d i t i o n s   f o r   R 7   r e s p o n s e .  
     *   @ p a r a m     h s d :   S D   h a n d l e  
     *   @ r e t v a l   S D   C a r d   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D M M C _ G e t C m d R e s p 7 ( S D I O _ T y p e D e f   * S D I O x )  
 {  
     u i n t 3 2 _ t   s t a _ r e g ;  
     / *   8   i s   t h e   n u m b e r   o f   r e q u i r e d   i n s t r u c t i o n s   c y c l e s   f o r   t h e   b e l o w   l o o p   s t a t e m e n t .  
     T h e   S D I O _ C M D T I M E O U T   i s   e x p r e s s e d   i n   m s   * /  
     u i n t 3 2 _ t   c o u n t   =   S D I O _ C M D T I M E O U T   *   ( S y s t e m C o r e C l o c k   /   8 U   / 1 0 0 0 U ) ;  
      
     d o  
     {  
         i f   ( c o u n t - -   = =   0 U )  
         {  
             r e t u r n   S D M M C _ E R R O R _ T I M E O U T ;  
         }  
         s t a _ r e g   =   S D I O x - > S T A ;  
     } w h i l e ( ( ( s t a _ r e g   &   ( S D I O _ F L A G _ C C R C F A I L   |   S D I O _ F L A G _ C M D R E N D   |   S D I O _ F L A G _ C T I M E O U T ) )   = =   0 U )   | |  
                   ( ( s t a _ r e g   &   S D I O _ F L A G _ C M D A C T )   ! =   0 U   ) ) ;  
          
     i f ( _ _ S D I O _ G E T _ F L A G ( S D I O x ,   S D I O _ F L A G _ C T I M E O U T ) )  
     {  
         / *   C a r d   i s   S D   V 2 . 0   c o m p l i a n t   * /  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ F L A G _ C T I M E O U T ) ;  
          
         r e t u r n   S D M M C _ E R R O R _ C M D _ R S P _ T I M E O U T ;  
     }  
     e l s e   i f ( _ _ S D I O _ G E T _ F L A G ( S D I O x ,   S D I O _ F L A G _ C C R C F A I L ) )  
     {  
         / *   C a r d   i s   S D   V 2 . 0   c o m p l i a n t   * /  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ F L A G _ C C R C F A I L ) ;  
          
         r e t u r n   S D M M C _ E R R O R _ C M D _ C R C _ F A I L ;  
     }  
     e l s e  
     {  
         / *   N o t h i n g   t o   d o   * /  
     }  
      
     i f ( _ _ S D I O _ G E T _ F L A G ( S D I O x ,   S D I O _ F L A G _ C M D R E N D ) )  
     {  
         / *   C a r d   i s   S D   V 2 . 0   c o m p l i a n t   * /  
         _ _ S D I O _ C L E A R _ F L A G ( S D I O x ,   S D I O _ F L A G _ C M D R E N D ) ;  
     }  
      
     r e t u r n   S D M M C _ E R R O R _ N O N E ;  
      
 }  
  
 / * *  
     *   @ b r i e f     S e n d   t h e   S e n d   E X T _ C S D   c o m m a n d   a n d   c h e c k   t h e   r e s p o n s e .  
     *   @ p a r a m     S D I O x :   P o i n t e r   t o   S D M M C   r e g i s t e r   b a s e  
     *   @ p a r a m     A r g u m e n t :   C o m m a n d   A r g u m e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   S D M M C _ C m d S e n d E X T C S D ( S D I O _ T y p e D e f   * S D I O x ,   u i n t 3 2 _ t   A r g u m e n t )  
 {  
     S D I O _ C m d I n i t T y p e D e f     s d m m c _ c m d i n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
  
     / *   S e n d   C M D 9   S E N D _ C S D   * /  
     s d m m c _ c m d i n i t . A r g u m e n t                   =   A r g u m e n t ;  
     s d m m c _ c m d i n i t . C m d I n d e x                   =   S D M M C _ C M D _ H S _ S E N D _ E X T _ C S D ;  
     s d m m c _ c m d i n i t . R e s p o n s e                   =   S D I O _ R E S P O N S E _ S H O R T ;  
     s d m m c _ c m d i n i t . W a i t F o r I n t e r r u p t   =   S D I O _ W A I T _ N O ;  
     s d m m c _ c m d i n i t . C P S M                           =   S D I O _ C P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ S e n d C o m m a n d ( S D I O x ,   & s d m m c _ c m d i n i t ) ;  
  
     / *   C h e c k   f o r   e r r o r   c o n d i t i o n s   * /  
     e r r o r s t a t e   =   S D M M C _ G e t C m d R e s p 1 ( S D I O x ,   S D M M C _ C M D _ H S _ S E N D _ E X T _ C S D , S D I O _ C M D T I M E O U T ) ;  
  
     r e t u r n   e r r o r s t a t e ;  
 }  
  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ S D _ M O D U L E _ E N A B L E D   | |   H A L _ M M C _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   S D I O   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  